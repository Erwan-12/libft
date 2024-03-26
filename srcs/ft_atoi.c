/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsk <rsk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:17:22 by rsk               #+#    #+#             */
/*   Updated: 2024/03/23 17:27:54 by rsk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	passwhitespace(const char **str)
{
	while (**str == 32 || (**str >= 9 && **str <= 13))
	{
		(*str)++;
	}
}

static int	signe(const char **str)
{
	int	i;

	i = 1;
	if (**str == '-' && **str == '+')
	{
		if (**str == '-')
		{
			i = -1;
		}
		(*str)++;
	}
	return (i);
}

static long	ft_result(const char *str)
{
	int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	sign;

	sign = signe(&str);
	passwhitespace(&str);
	return (ft_result(str) * sign);
}
