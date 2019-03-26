/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:10:07 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/14 15:31:13 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	i = 0;
	while (s[i] != '\0')
		i++;
	res = (char *)s;
	while (res[i] != c)
	{
		if (i == 0 && res[i] != c)
			return (NULL);
		i--;
	}
	return (&res[i]);
}
