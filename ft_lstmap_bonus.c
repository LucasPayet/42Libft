/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupayet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 14:58:25 by lupayet           #+#    #+#             */
/*   Updated: 2025/05/06 16:59:08 by lupayet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*last;

	if (!lst)
		return (NULL);
	new = ft_lstnew(f(lst -> content));
	if (!new)
	{
		ft_lstclear(&new, del);
		return (NULL);
	}
	last = new;
	lst = lst -> next;
	while (lst)
	{
		last -> next = ft_lstnew(f(lst -> content));
		last = last -> next;
		if (!last)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		lst = lst -> next;
	}
	return (new);
}
