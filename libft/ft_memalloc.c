/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 11:33:38 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/15 11:51:28 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void			*res;
	unsigned char	*i;

	res = malloc(size);
	if (res == NULL)
		return (NULL);
	i = (unsigned char *)res;
	while (size > 0)
	{
		*i = 0;
		i++;
		size--;
	}
	return (res);
}
