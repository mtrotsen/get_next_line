/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:13:35 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/14 13:03:54 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				res;
	int				i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 1)
	{
		if (c1[i] != c2[i])
			return (res = c1[i] - c2[i]);
		i++;
		n--;
	}
	res = c1[i] - c2[i];
	return (res);
}
