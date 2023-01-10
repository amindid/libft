/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:49:57 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 23:00:55 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Counts the number of nodes in a list.

int	ft_lstsize(t_list *lst)
{
	int	list_size;

	list_size = 0;
	while (lst != NULL)
	{
		list_size++;
		lst = lst -> next;
	}
	return (list_size);
}
