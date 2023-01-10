/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:42:40 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:22:57 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The tolower() function converts an upper-case letter to the corresponding
// lower-case letter.  The argument must be representable as an unsigned
// char or the value of EOF.

int	ft_tolower(int argum)
{
	if (argum >= 65 && argum <= 90)
	{
		argum = argum + 32 ;
		return (argum);
	}
	else
		return (argum);
}
