/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 22:13:59 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 22:53:45 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.

static int	n_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*check_zero_minint(int n)
{
	int	n_lent;

	n_lent = n_len(n);
	if (n_lent == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

static char	*ft_itoa_helper(int n, char *number)
{
	int	n_lent;
	int	i;
	int	j;

	i = 0;
	n_lent = n_len(n);
	if (n < 0)
	{
		number [0] = '-';
		i = 1;
		n *= -1;
	}
	j = n_lent - 1;
	while (n > 0)
	{
		number[j--] = (n % 10) + '0';
		n = n / 10;
	}
	number[n_lent] = '\0';
	return (number);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		n_lent;
	int		i;

	i = 0;
	n_lent = n_len(n);
	if (n_lent == 0 || n == -2147483648)
		return (check_zero_minint(n));
	number = malloc(sizeof(char) * (n_lent + 1));
	if (number == NULL)
		return (NULL);
	return (ft_itoa_helper(n, number));
}
