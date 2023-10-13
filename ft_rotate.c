/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:55:21 by jgasparo          #+#    #+#             */
/*   Updated: 2023/09/25 13:44:28 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **list_a, int f)
{
	t_list	*first;
	t_list	*current;

	first = *list_a;
	current = *list_a;
	if (*list_a == NULL || (*list_a)->next == NULL)
	{
		write(1, "Error\n", 6);
		return ;
	}
	*list_a = (*list_a)->next;
	while (current->next)
		current = current->next;
	current->next = first;
	first->next = NULL;
	if (f == 1)
		write(1, "ra\n", 3);
}

void	rb(t_list **list_b, int f)
{
	t_list	*first;
	t_list	*current;

	first = *list_b;
	current = *list_b;
	if (*list_b == NULL || (*list_b)->next == NULL)
	{
		write(1, "Error\n", 6);
		return ;
	}
	*list_b = (*list_b)->next;
	while (current->next)
		current = current->next;
	current->next = first;
	first->next = NULL;
	if (f == 1)
		write(1, "rb\n", 3);
}

void	rr(t_list **list_a, t_list **list_b)
{
	ra(list_a, 0);
	rb(list_b, 0);
	write(1, "rr\n", 3);
}
