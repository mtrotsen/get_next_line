/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 16:37:20 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/01 11:18:40 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_factorial(int nb)
{
	int i;

	i = 0;
	if (nb > 12)
		return (0);
	if (nb >= 1)
		i = nb;
	if (nb == 0)
		return (1);
	while (nb >= 2)
	{
		nb = nb - 1;
		i = i * nb;
	}
	return (i);
}
