/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:53:01 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/22 14:32:55 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		length(long n)
{
	int l;

	l = 0;
	if (n == 0)
		l++;
	if (n < 0)
	{
		n = n * -1;
		l++;
	}
	while (n > 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char			*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		i;

	nb = n;
	i = length(n);
	if ((str = malloc(i + 1)) == NULL)
		return (NULL);
	str[i] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	str[--i] = (nb % 10) + '0';
	while (nb /= 10)
	{
		str[--i] = (nb % 10) + '0';
	}
	return (str);
}
