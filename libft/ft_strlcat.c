/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:51:57 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/14 15:25:01 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t slen;
	size_t dlen;

	slen = ft_strlen((char*)src);
	i = 0;
	j = 0;
	dlen = ft_strlen((char*)dst);
	while (dst[i])
		i++;
	if (dlen > dstsize)
		return (slen + dstsize);
	while (src[j] && dstsize - 1 > i)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (slen + dlen);
}
