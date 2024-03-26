/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsk <rsk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:04:10 by rsk               #+#    #+#             */
/*   Updated: 2024/03/26 18:33:06 by rsk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*str;

	str = malloc(size * count);
	if (!str)
	{
		return (NULL);
	}
	while (i < count)
	{
		str[i++] = 'p';
	}
	return (str);
}
