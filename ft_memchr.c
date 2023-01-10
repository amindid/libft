/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 19:39:58 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:02:18 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memchr() function locates the first occurrence of c (converted to 
// anunsigned char) in string s.

void	*ft_memchr(const void *string, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)string)[i] == (char)c)
			return (&((char *)string)[i]);
		i++;
	}
	return (NULL);
}
