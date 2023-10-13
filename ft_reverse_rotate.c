/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:58:31 by jgasparo          #+#    #+#             */
/*   Updated: 2023/09/25 13:38:46 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rra(t_list **list_a, int f)
{
	t_list	*last;
	t_list	*prev;

	last = *list_a;
	prev = NULL;
	if (*list_a == NULL || (*list_a)->next == NULL)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	last->next = *list_a;
	*list_a = last;
	prev->next = NULL;
	if (f == 1)
		write(1, "rra\n", 4);
	return (1);
}

void	rrb(t_list **list_b, int f)
{
	t_list	*last;
	t_list	*prev;

	last = *list_b;
	prev = NULL;
	if (*list_b == NULL || (*list_b)->next == NULL)
	{
		write(1, "Error\n", 6);
		return ;
	}
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	last->next = *list_b;
	*list_b = last;
	prev->next = NULL;
	if (f == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_list **list_a, t_list **list_b)
{
	rra(list_a, 0);
	rrb(list_b, 0);
	write(1, "rrr\n", 4);
}
