/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:09:19 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:09:11 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strchr() function locates the first occurrence of c (converted to a
// char) in the string pointed to by s.  The terminating null character is
// considered to be part of the string; therefore if c is `\0', the functions 
// locate the terminating `\0'.

char	*ft_strchr(const char *string, int chrstr)
{
	int	i;

	i = 0;
	while (string[i] != (char)chrstr)
	{
		if (string[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)&string[i]);
}
