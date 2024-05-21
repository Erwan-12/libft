/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwfonta <erwfonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:40:52 by erwfonta          #+#    #+#             */
/*   Updated: 2024/05/21 15:46:47 by erwfonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst->next)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
