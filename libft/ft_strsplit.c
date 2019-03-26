/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:33:50 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/20 12:51:13 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int i;
	int n;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != c)
			n++;
		if (s[i] != c && s[i - 1] == c)
			n++;
		i++;
	}
	return (n);
}

static char	*ft_put(char const *s, char c, int *i)
{
	char	*str;
	int		j;
	int		size;

	size = 0;
	j = 0;
	while (s[size] != '\0')
		size++;
	if ((str = (char *)malloc(sizeof(str) * size)) == NULL)
		return (NULL);
	while (s[*i] != c && s[*i] != '\0')
	{
		str[j] = s[*i];
		*i += 1;
		j++;
	}
	str[j] = '\0';
	while (s[*i] == c && s[*i] != '\0')
		*i += 1;
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		words;
	int		f;
	int		i;

	i = 0;
	f = 0;
	if (!s)
		return (NULL);
	words = ft_count(s, c);
	if ((res = malloc(sizeof(*res) * ft_count(s, c) + 1)) == NULL)
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (f < words && s[i])
	{
		res[f] = ft_put(s, c, &i);
		f++;
	}
	res[f] = NULL;
	return (res);
}
