/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:01:16 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:04:34 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memset() function writes len bytes of value c (converted to an
// unsigned char) to the string b.

void	*ft_memset(void *string, int c, size_t n)
{
	size_t	i;
	char	*p;

	p = string;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
