/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:04:03 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/22 14:45:29 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i > len)
		i = len;
	if ((res = malloc(((len + 1) - i))) == NULL)
		return (NULL);
	while (i < len)
		res[j++] = s[i++];
	res[j] = '\0';
	return (res);
}
