/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:31:38 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:15:54 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strlen() function computes the length of the string s.  The strnlen()
// function attempts to compute the length of s, but never scans beyond the
// first maxlen bytes of s.

size_t	ft_strlen(const char *string)
{
	size_t	i ;

	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}
