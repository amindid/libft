/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:30:15 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:17:16 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strncmp() function compares not more than n characters.  Because
// strncmp() is designed for comparing strings rather than binary data,
// characters that appear after a `\0' character are not compared.

int	ft_strncmp(const char *string1, const char *string2, size_t n)
{
	size_t		i;

	i = 0;
	while (((unsigned char)string1[i] || (unsigned char)string2[i]) && i < n)
	{
		if ((unsigned char )string1[i] != (unsigned char)string2[i])
			return ((unsigned char)string1[i] - (unsigned char)string2[i]);
		i++;
	}
	return (0);
}
