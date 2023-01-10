/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:31:19 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 22:47:57 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The isascii() function tests for an ASCII character, which is any 
// character between 0 and octal 0177 inclusive.

int	ft_isascii(int argum)
{
	if (argum < 0 || argum > 127)
		return (0);
	else
		return (1);
}
