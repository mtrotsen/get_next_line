/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:45:57 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/14 12:31:08 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;

	if (len == 0)
		return (b);
	p = (unsigned char *)b;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}
