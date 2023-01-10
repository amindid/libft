/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:21:36 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:23:31 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The toupper() function converts a lower-case letter to the corresponding
// upper-case letter.  The argument must be representable as an unsigned
// char or the value of EOF.

int	ft_toupper(int argum)
{
	if (argum >= 97 && argum <= 122)
	{
		argum = argum - 32 ;
		return (argum);
	}
	else
		return (argum);
}
