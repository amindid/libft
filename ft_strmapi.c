/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:22:14 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:16:20 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Applies the function ’f’ to each character of the
// string ’s’, and passing its index as first argument
// to create a new string (with malloc(3)) resulting
// from successive applications of ’f’.

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s2;
	size_t			len_s;

	i = 0;
	if (s == NULL)
		return (NULL);
	len_s = ft_strlen((char *)s);
	s2 = malloc (sizeof(char) * (len_s + 1));
	if (!s2)
		return (NULL);
	while (s[i])
	{
		s2[i] = f(i, ((char *)s)[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
