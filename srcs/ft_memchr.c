/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsk <rsk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 18:11:32 by rsk               #+#    #+#             */
/*   Updated: 2024/03/23 22:38:08 by rsk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	c = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (*(const unsigned char *)(s + i) == c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
