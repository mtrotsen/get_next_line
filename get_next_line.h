/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:22:13 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/29 14:23:04 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "./libft/libft.h"

# define BUFF_SIZE 32

# define SUB (whole_buf - buf)
# define SWAP(x, y, z) x = y; y = z; free(x);
# define CHECK(x) if(!(x)) return (NULL);

typedef struct		s_gnl
{
	int				fd;
	char			*buf;
	struct s_gnl	*next;
}					t_gnl;

int					get_next_line(const int fd, char **line);

#endif
