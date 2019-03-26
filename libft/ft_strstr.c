/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:08:34 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/14 15:50:20 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int t;
	int l;

	l = 0;
	i = 0;
	while (needle[l] != '\0')
		l++;
	if (l == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		t = 0;
		while (needle[t] == haystack[i + t])
		{
			if (needle[t + 1] == '\0')
				return ((char *)haystack + i);
			t++;
		}
		t = 0;
		i++;
	}
	return (NULL);
}
