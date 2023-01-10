/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:08:27 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:24:16 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The ft_atoi() function converts the initial portion of the string pointed 
// to by string to int representation.

int	ft_atoi(const char *string)
{
	long	sign;
	long	res;
	int		i;

	sign = 1;
	res = 0;
	i = 0;
	while (string[i] == 32 || (string[i] >= 9 && string[i] <= 13))
		i++;
	if (((char *)string)[i] == '-' || ((char *)string)[i] == '+')
	{
		if (((char *)string)[i++] == '-')
			sign = -1;
	}
	if (((char *)string)[i] < 48 && ((char *)string)[i] > 57)
		return (0);
	while (((char *)string)[i] >= 48 && ((char *)string)[i] <= 57)
	{
		res *= 10;
		res += ((char *)string)[i++] - 48;
	}
	return (res * sign);
}
