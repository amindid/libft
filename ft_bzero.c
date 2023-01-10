/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:39:32 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:24:27 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The ft_bzero() function writes n zeroed bytes to the string .  If n is zero, 
// ft_bzero() does nothing.

void	ft_bzero(void *string, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)string)[i] = 0;
		i++;
	}
}
