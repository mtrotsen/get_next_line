/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:21:05 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/29 14:21:13 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_gnl	*find_fd(t_gnl **file, int fd)
{
	t_gnl	*tmp;

	tmp = *file;
	while (tmp)
	{
		if (tmp->fd == fd)
			return (tmp);
		tmp = tmp->next;
	}
	CHECK(tmp = (t_gnl *)malloc(sizeof(t_gnl)));
	tmp->fd = fd;
	tmp->buf = NULL;
	tmp->next = *file;
	*file = tmp;
	return (tmp);
}

static char		*read_line(t_gnl *tmp, char buf[BUFF_SIZE + 1])
{
	char	*current;
	char	*old;
	char	*whole_buf;
	char	*sub;
	size_t	size;

	current = ft_strnew(0);
	while (!(whole_buf = ft_strchr(buf, '\n')))
	{
		SWAP(old, current, ft_strjoin(current, buf));
		if (!(size = read(tmp->fd, buf, BUFF_SIZE)))
		{
			ft_strdel(&(tmp->buf));
			return (current);
		}
		buf[size] = '\0';
	}
	sub = ft_strsub(buf, 0, SUB);
	SWAP(old, current, ft_strjoin(current, sub));
	free(sub);
	SWAP(old, tmp->buf, ft_strsub(buf, SUB + 1, BUFF_SIZE - SUB));
	return (current);
}

int				get_next_line(const int fd, char **line)
{
	char			buf[BUFF_SIZE + 1];
	static t_gnl	*file = NULL;
	size_t			s;
	t_gnl			*tmp;

	if (fd < 0 || read(fd, buf, 0) < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	tmp = find_fd(&file, fd);
	if (tmp->buf && (ft_strlen(tmp->buf)))
		ft_strcpy(buf, tmp->buf);
	else
	{
		if (!(s = read(fd, buf, BUFF_SIZE)))
		{
			ft_strdel(&(tmp->buf));
			return (0);
		}
		buf[s] = '\0';
	}
	*line = read_line(tmp, buf);
	return (1);
}
