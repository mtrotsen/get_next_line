/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 13:18:14 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/19 13:42:26 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		f;
	int		j;
	int		i;
	int		len;

	f = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	f = ft_strlen(s1);
	j = ft_strlen(s2);
	len = f + j;
	if ((res = malloc(sizeof(res) * (len + 1))) == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
		res[i++] = *s1++;
	while (*s2 != '\0')
	{
		res[i++] = *s2++;
	}
	res[i] = '\0';
	return (res);
}
