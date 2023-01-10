/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:16:18 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 22:44:20 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The calloc() function contiguously allocates enough space for count 
// objects that are size bytes of memory each and returns a pointer to the
// allocated memory.  The allocated memory is filled with bytes of value zero.

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointr;
	size_t	i;

	i = 0;
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	pointr = malloc(count * size);
	if (pointr == NULL)
		return (pointr);
	else
	{
		while (i < count * size)
		{
			((char *)pointr)[i] = 0;
			i++;
		}
	}
	return (pointr);
}
