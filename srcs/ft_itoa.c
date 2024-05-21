/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsk <rsk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:07:36 by rsk               #+#    #+#             */
/*   Updated: 2024/03/27 23:21:48 by rsk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ctype.h"
# include "stddef.h"
# include "stdio.h"
# include "unistd.h"
# include "string.h"
# include "stdlib.h"

static int	len_itoa(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static char	*alloc_itoa(size_t len)
{
	char	*tmp;

	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	tmp[0] = '0';
	return (tmp);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	size_t	i;
	long	nbr;

	nbr = n;
	len = len_itoa(nbr);
	i = len - 1;
	result = alloc_itoa(len);
	if (!result)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	while (nbr != 0)
	{
		result[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	result[len] = 0;
	return (result);
}

int	main(void)
{
	printf("the fake is : %s \n",ft_itoa(-2147483648));
	printf("the fake is : %s",ft_itoa(1264));
	return (0);
}