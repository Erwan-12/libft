/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsk <rsk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:47:38 by rsk               #+#    #+#             */
/*   Updated: 2024/03/25 21:46:52 by rsk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"
#include "stddef.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "unistd.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	if (dst == NULL && src == NULL)
		return (dst);
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (n > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		n--;
	}
	return (dst);
}
/*
int	main(void)
{
	char *str1 = malloc(strlen("bonjour la team") + 1);
	strcpy(str1, "bonjour la team");
	char *str2 = "Bonjourno la team";

	printf("Avant : %s\n", str1);
	printf("la fausse est : %p \n", ft_memcpy((void *)str1, (void *)str2, 10));
	//printf("la vraie est : %p \n", memcpy((void *)str1, (void *)str2, 10));
	printf("Après : %s\n", str1);

	free(str1);
}*/