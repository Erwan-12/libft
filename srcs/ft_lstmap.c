/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwfonta <erwfonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:27:03 by erwfonta          #+#    #+#             */
/*   Updated: 2024/05/21 17:41:43 by erwfonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <libft.h>

static t_list	*lst_fill(t_list *lst, void *(*f)(void *))
{
	t_list	*fill;

	if (f == NULL)
		fill = ft_lstnew(lst->content);
	else
		fill = ft_lstnew(f(lst->content));
	return (fill);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*curr;

	if (lst == NULL)
		return (NULL);
	new_head = lst_fill(lst, f);
	curr = new_head;
	while (lst->next != NULL && curr != NULL)
	{
		curr->next = lst_fill(lst->next, f);
		if (curr->next == NULL)
		{
			ft_lstclear(&new_head, del);
			break ;
		}
		curr = curr->next;
		lst = lst->next;
	}
	return (new_head);
}
