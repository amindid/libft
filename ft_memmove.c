/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:16:09 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:04:04 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memmove() function copies len bytes from string src to string dst.
// The two strings may overlap; the copy is always done in a non-destructive
// manner.

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((char *)dest > (char *)src)
	{
		while (len--)
		{
			((char *)dest)[len] = ((char *)src)[len];
		}
	}
	else
	{
		if (dest == NULL && src == NULL)
			return (0);
		while (i < len)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
