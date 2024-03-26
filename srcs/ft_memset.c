/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsk <rsk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:20:12 by rsk               #+#    #+#             */
/*   Updated: 2024/03/25 18:21:07 by rsk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"
#include "stddef.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "unistd.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*tmp_str1;

	tmp_str1 = (unsigned char *)str;
	while (n > 0)
	{
		*(tmp_str1++) = c;
		n--;
	}
	return (str);
}

int	main(void)
{
	char	*str1;

	str1 = malloc(strlen("bonjour la team") + 1);
	strcpy(str1, "bonjour la team");
	printf("avant : %s \n", str1);
	printf("la vrai est : %p \n", ft_memset((void *)str1, 115, 5));
	printf("aprés : %s \n", str1);
	free(str1);
}
