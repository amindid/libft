/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:33:12 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:22:05 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a substring
// from the string ’s’.
// The substring begins at index ’start’ and is of
// maximum size ’len’.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	j;

	i = start ;
	j = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen((char *)s) < len)
		substring = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	else
		substring = malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (substring);
	if (start <= (unsigned int)ft_strlen((char *)s))
	{
		while (s[i] && j < len)
			substring[j++] = ((char *)s)[i++];
	}
	substring[j] = '\0';
	return (substring);
}
