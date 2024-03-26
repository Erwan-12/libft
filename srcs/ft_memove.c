/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsk <rsk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:34:59 by rsk               #+#    #+#             */
/*   Updated: 2024/03/25 21:50:17 by rsk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"
#include "stddef.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "unistd.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (len > 0)
	{
		*(tmp_dst++) = *(tmp_src++);
		len--;
	}
	return (dst);
}

/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = malloc(strlen("bonjour la team") + 1);
	str2 = malloc(strlen("prout pol")+ 10);
	strcpy(str1, "bonjour la team");
	strcpy(str2, "prout pol");
	printf("avant : %s \n", str1);
	printf("la vrai est : %p \n", ft_memmove((void *)str1, (void *)str2, 5));
	printf("aprés : %s \n", str1);
	free(str1);
	free(str2);
}*/