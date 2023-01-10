/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:59:17 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:19:17 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strnstr() function locates the first occurrence of the null-termi-nated
// string needle in the string haystack, where not more than len characters
// are searched.  Characters that appear after a `\0' character are not searched.
// Since the strnstr() function is a FreeBSD specific API, it should only be used
// when portability is not a concern.

char	*ft_strnstr(const char *string, const char *srchstring, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (srchstring[0] == '\0')
		return ((char *)string);
	if (len == 0)
		return (0);
	while (string[i] && i < len)
	{
		j = 0;
		while (string [i + j] == srchstring[j] && i + j < len)
		{
			if (srchstring[j + 1] == '\0')
				return ((char *)string + i);
			else
				j++;
		}
		i++;
	}
	return (0);
}
