/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:24:13 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:21:28 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.

static int	check_if_exist(char c, char *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	first_char_index(char *s1, char *set)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (check_if_exist(((char *)s1)[i], (char *)set) == 1)
			i++;
		else
			break ;
	}
	return (i);
}

static int	last_char_index(char *s1, char *set)
{
	size_t	j;

	j = ft_strlen((char *)s1) - 1;
	while (j >= 0)
	{
		if (check_if_exist(((char *)s1)[j], (char *)set) == 1)
			j--;
		else
			break ;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*ptr;

	if (s1 == NULL)
		return (NULL);
	i = first_char_index((char *)s1, (char *)set);
	k = 0;
	j = last_char_index((char *)s1, (char *)set);
	if (i == ft_strlen((char *)s1))
		return (ft_strdup("\0"));
	ptr = malloc(sizeof(char) * (j - i + 2));
	if (!ptr)
		return (NULL);
	while (i <= j)
		ptr[k++] = ((char *)s1)[i++];
	ptr[k] = '\0';
	return (ptr);
}
