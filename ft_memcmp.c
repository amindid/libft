/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:17:33 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:03:09 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memcmp() function compares byte string s1 against byte string s2.
// Both strings are assumed to be n bytes long.

int	ft_memcmp(const void *string1, const void *string2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)string1)[i] != ((unsigned char *)string2)[i])
			return (((unsigned char *)string1)[i] - (
						(unsigned char *)string2)[i]);
		i++;
	}
	return (0);
}
