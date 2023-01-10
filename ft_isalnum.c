/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:29:53 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 22:45:55 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The isalnum() function tests for any character for which isalpha(3) or
// isdigit(3) is true.  The value of the argument must be representable as
// an unsigned char or the value of EOF.

int	ft_isalnum(int argum)
{
	if (argum < 48 || (argum > 57 && argum < 65))
		return (0);
	else if ((argum > 90 && argum < 97) || argum > 122)
		return (0);
	else
		return (1);
}
