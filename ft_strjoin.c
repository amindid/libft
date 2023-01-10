/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:47:01 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:12:22 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2’.

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	totlen;
	size_t	i;
	size_t	j;
	char	*ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	totlen = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	i = 0;
	j = 0;
	ptr = malloc(sizeof(char) * (totlen + 1));
	if (!ptr)
		return (NULL);
	while (i < ft_strlen((char *)s1))
	{
		ptr[i] = ((char *)s1)[i];
		i++;
	}
	while (i < totlen)
		ptr[i++] = ((char *)s2)[j++];
	ptr[i] = '\0';
	return (ptr);
}
