/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouchaad <aouchaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:00:53 by aouchaad          #+#    #+#             */
/*   Updated: 2023/01/10 22:54:39 by aouchaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Adds the node ’new’ at the end of the list.

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!(*lst))
		(*lst) = new;
	else
	{
		list = ft_lstlast(*lst);
		list->next = new;
	}
}
