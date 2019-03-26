/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 12:40:04 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/22 12:11:35 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*res;
	unsigned char	*p;
	size_t			i;

	i = 0;
	res = (char *)malloc(size + 1);
	if (res == NULL)
		return (NULL);
	p = (unsigned char *)res;
	while (i < size + 1)
	{
		p[i] = '\0';
		i++;
	}
	return (res);
}
