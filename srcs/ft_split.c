/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erwfonta <erwfonta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 16:36:43 by rsk               #+#    #+#             */
/*   Updated: 2024/05/21 11:52:44 by erwfonta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c)
{
	int	count;
	int	new_word;

	count = 0;
	new_word = 0;
	while (*str)
	{
		if (*str != c && new_word == 0)
		{
			new_word = 1;
			count++;
		}
		else if (*str == c)
			new_word = 0;
		str++;
	}
	return (count);
}

static size_t	get_wordlen(const char *s, char c)
{
	size_t	wordlen;

	wordlen = 0;
	while (s[wordlen] != '\0' && s[wordlen] != c)
		wordlen++;
	return (wordlen);
}

char	**ft_split(char const *s, char c)
{
}
