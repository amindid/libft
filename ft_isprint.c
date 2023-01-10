/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:11:51 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 22:50:37 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The isprint() function tests for any printing character, including space
// (` ').  The value of the argument must be representable as an unsigned
// char or the value of EOF.

int	ft_isprint(int argum)
{
	if (argum > 31 && argum < 127)
		return (1);
	return (0);
}
