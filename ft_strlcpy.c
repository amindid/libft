/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 22:05:57 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:14:43 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strlcpy() copies up to dstsize - 1 characters from the string src to dst,
// NUL-terminating the result if dstsize is not 0.

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	srclen;
	size_t	j;

	srclen = ft_strlen((char *)src);
	j = 0;
	if (!destsize)
		return (srclen);
	if (srclen >= 0)
	{
		while (src[j] != '\0' && j < destsize - 1)
		{
			dest[j] = (char)src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (srclen);
}
