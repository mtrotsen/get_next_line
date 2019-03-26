/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:11:12 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/16 13:23:51 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*nstr;
	int		j;
	int		i;

	i = 0;
	j = 0;
	if (!s || !f)
		return (NULL);
	j = ft_strlen(s);
	nstr = malloc(j + 1);
	if (nstr == NULL)
		return (NULL);
	while (*s)
	{
		nstr[i++] = f(*s);
		s++;
	}
	nstr[i] = '\0';
	return (nstr);
}
