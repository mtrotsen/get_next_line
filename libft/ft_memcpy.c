/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:43:41 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/14 13:59:44 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*c;

	i = 0;
	p = (unsigned char *)dst;
	c = (unsigned char *)src;
	while (i < n)
	{
		p[i] = c[i];
		i++;
	}
	dst = p;
	return (dst);
}
