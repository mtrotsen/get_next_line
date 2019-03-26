/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 12:09:28 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/22 15:01:23 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*t;
	int				count;

	i = 0;
	count = 0;
	p = (unsigned char *)dst;
	t = (unsigned char *)src;
	while (i < n && count == 0)
	{
		if (t[i] == (unsigned char)c)
			count = 1;
		p[i] = t[i];
		i++;
	}
	if (count == 0)
		return (NULL);
	dst = p;
	return (dst + i);
}
