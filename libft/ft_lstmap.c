/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrotsen <mtrotsen@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 14:29:37 by mtrotsen          #+#    #+#             */
/*   Updated: 2018/11/22 14:37:26 by mtrotsen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *res;
	t_list *func;
	t_list *first;

	if (!lst || !f)
		return (NULL);
	func = f(lst);
	if (!(res = ft_lstnew(func->content, func->content_size)))
		return (NULL);
	lst = lst->next;
	first = res;
	while (lst)
	{
		func = f(lst);
		if (!(res->next = ft_lstnew(func->content, func->content_size)))
			return (NULL);
		res = res->next;
		lst = lst->next;
	}
	return (first);
}
