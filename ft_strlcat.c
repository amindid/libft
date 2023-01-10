/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:56:11 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:13:56 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strlcat() appends string src to the end of dst.  It will append at most
// dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
// dstsize is 0 or the original dst string was longer than dstsize (in 
// practice this should not happen as it means that either dstsize is incorrect
// or that dst is not a proper string).

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	totlen;
	size_t	i;

	dstlen = (size_t)ft_strlen(dest);
	srclen = (size_t)ft_strlen((char *)src);
	totlen = 0;
	i = 0;
	if (dstlen >= destsize)
		return (destsize + srclen);
	totlen = dstlen + srclen;
	while (src[i] && dstlen + 1 < destsize)
		dest[dstlen++] = src[i++];
	dest[dstlen] = '\0';
	return (totlen);
}
