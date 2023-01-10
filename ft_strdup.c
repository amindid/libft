/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:04:16 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:10:29 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The strdup() function allocates sufficient memory for a copy of the
// string s1, does the copy, and returns a pointer to it.

char	*ft_strdup(const char *string)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc(sizeof(char) * (ft_strlen((char *)string) + 1));
	i = 0;
	if (ptr == NULL)
		return (0);
	while (((char *)string)[i] != '\0')
	{
		ptr[i] = ((char *)string)[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
