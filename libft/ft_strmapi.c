/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:25:53 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/22 12:17:46 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*nstr;
	int				j;
	unsigned int	i;

	j = 0;
	i = 0;
	if (!s || !f)
		return (NULL);
	j = ft_strlen(s);
	nstr = malloc(j + 1);
	if (nstr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		nstr[i] = f(i, s[i]);
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
