/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:26:42 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 22:47:02 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The isalpha() function tests for any character for which isupper(3) or
// islower(3) is true.  The value of the argument must be representable as
// an unsigned char or the value of EOF.

int	ft_isalpha(int argum)
{
	if (argum < 65 || (argum > 90 && argum < 97) || argum > 122)
		return (0);
	return (1);
}
