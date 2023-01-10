/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:05:43 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 22:49:26 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The isdigit() function tests for a decimal digit character.  Regardless
// of locale, this includes the following characters only:

//      ``0''         ``1''         ``2''         ``3''         ``4''
//      ``5''         ``6''         ``7''         ``8''         ``9''

int	ft_isdigit(int argum)
{
	if (argum < 48 || argum > 57)
		return (0);
	else
		return (1);
}
