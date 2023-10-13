/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:01:02 by jgasparo          #+#    #+#             */
/*   Updated: 2023/09/25 09:13:17 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **list_a, t_list **list_b)
{
	t_list	*top;

	top = *list_b;
	if (*list_b == NULL)
	{
		write(1, "Error\n", 6);
		return ;
	}
	*list_b = top->next;
	top->next = *list_a;
	*list_a = top;
	write(1, "pa\n", 3);
}

void	pb(t_list **list_a, t_list **list_b)
{
	t_list	*top;

	top = *list_a;
	if (*list_a == NULL)
	{
		write(1, "Error\n", 6);
		return ;
	}
	*list_a = top->next;
	top->next = *list_b;
	*list_b = top;
	write(1, "pb\n", 3);
}
