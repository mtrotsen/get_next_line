/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:26:40 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/22 15:14:50 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p;
	unsigned char	*c;
	size_t			i;

	i = -1;
	p = (unsigned char *)dst;
	c = (unsigned char *)src;
	if (p > c)
		while ((int)(--len) >= 0)
			p[len] = c[len];
	else
		while (++i < len)
			p[i] = c[i];
	return (dst);
}
