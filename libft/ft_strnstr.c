/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:34:40 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/14 15:53:58 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	t;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		t = 0;
		while (needle[t] == haystack[i + t] && i + t < len)
		{
			if (needle[t + 1] == '\0')
				return ((char *)haystack + i);
			t++;
		}
		i++;
	}
	return (NULL);
}
