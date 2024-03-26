/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsk <rsk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:39:58 by rsk               #+#    #+#             */
/*   Updated: 2024/03/25 21:50:48 by rsk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
int	main(void)
{
	printf("le vrai est : %ld \n", strlen("prout"));
	printf("le faux est : %ld \n", ft_strlen("prout"));
	printf("le vrai est : %ld \n", strlen(""));
	printf("le faux est : %ld \n", ft_strlen(""));
}*/