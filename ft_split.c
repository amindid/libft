/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:03:36 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:07:33 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter.

static int	words_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*sting_allocation(int i, const char *s, char c)
{
	int		string_len;
	char	*string;
	int		j;

	j = i;
	string_len = 0;
	while (s[i] != c && s[i])
	{
		string_len++;
		i++;
	}
	i = 0;
	string = malloc (sizeof(char) * (string_len + 1));
	if (!string)
		return (NULL);
	while (s[j] && s[j] != c)
		string[i++] = s[j++];
	string[i] = '\0';
	return (string);
}

char	**ft_split(const char *s, char c)
{
	char	**strings;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	strings = malloc(sizeof(char *) * (words_count(s, c) + 1));
	if (!strings)
		return (NULL);
	while (s[i] && j < words_count(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			strings[j] = sting_allocation(i, s, c);
			j++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	strings[j] = 0;
	return (strings);
}
