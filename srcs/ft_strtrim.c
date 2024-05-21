/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsk <rsk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 23:58:12 by rsk               #+#    #+#             */
/*   Updated: 2024/03/29 16:35:59 by rsk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ctype.h"
#include "stddef.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "unistd.h"

static size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	end = ft_strlen(s1);
	start = 0;
	while (is_set(s1[start], set))
		start++;
	while (is_set(s1[end], set))
		end--;
	i = end - start;
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start != end)
	{
		str[i++] = s1[start++];
	}
	return (str);
}

int	main(void)
{
	char *str = "ababaaaMy name is Simonbbaaabbad";
	char *set = "ab";
	printf("this is mine : %s", ft_strtrim(str, set));
}