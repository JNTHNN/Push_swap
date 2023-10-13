/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:53:31 by jgasparo          #+#    #+#             */
/*   Updated: 2023/10/12 14:44:29 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sa(t_list **list, int f)
{
	t_list	*first;
	t_list	*second;

	if (*list == NULL || (*list)->next == NULL)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	first = *list;
	second = (*list)->next;
	first->next = second->next;
	second->next = first;
	*list = second;
	if (f == 1)
		write(1, "sa\n", 3);
	return (1);
}

void	sb(t_list **list, int f)
{
	t_list	*first;
	t_list	*second;

	if (*list == NULL || (*list)->next == NULL)
	{
		write(1, "Error\n", 6);
		return ;
	}
	first = *list;
	second = (*list)->next;
	first->next = second->next;
	second->next = first;
	*list = second;
	if (f == 1)
		write(1, "sb\n", 3);
}

void	ss(t_list **list_a, t_list **list_b)
{
	sa(list_a, 0);
	sb(list_b, 0);
	write(1, "ss\n", 3);
}
