/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:50:49 by jgasparo          #+#    #+#             */
/*   Updated: 2023/10/13 09:42:27 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_setup_index(t_list **list_a)
{
	t_list	*first;
	t_list	*cmp_list_a;
	int		i;

	first = *list_a;
	cmp_list_a = *list_a;
	while (*list_a)
	{
		cmp_list_a = first;
		i = 0;
		while (cmp_list_a)
		{
			if ((*list_a)->content > cmp_list_a->content)
				i++;
			if ((*list_a)->index != i)
				(*list_a)->index = i;
			if (!cmp_list_a->next)
				break ;
			cmp_list_a = cmp_list_a->next;
		}
		*list_a = (*list_a)->next;
	}
	*list_a = first;
}

void	ft_sort_little(t_list **list, int size)
{
	if (size >= 3)
	{
		if ((*list)->index > (*list)->next->index
			&& (*list)->next->index > (*list)->next->next->index && sa(list, 1))
			rra(list, 1);
		else if ((*list)->index < (*list)->next->index
			&& (*list)->index < (*list)->next->next->index && rra(list, 1))
			sa(list, 1);
		if ((*list)->index > (*list)->next->index
			&& (*list)->index < (*list)->next->next->index)
			sa(list, 1);
		if ((*list)->index < (*list)->next->index
			&& (*list)->index > (*list)->next->next->index)
			rra(list, 1);
		if ((*list)->index > (*list)->next->index
			&& (*list)->index > (*list)->next->next->index)
			ra(list, 1);
	}
	if (!ft_is_sorted(*list) && size < 3)
		sa(list, 1);
}

void	ft_sort_middle(t_list **list_a, t_list **list_b, int index)
{
	int	size;
	int	pos;

	size = ft_lstsize(*list_a);
	while ((*list_a)->index != index)
	{	
		pos = ft_find_min_index(*list_a);
		if (pos >= size / 2)
			rra(list_a, 1);
		else
			ra(list_a, 1);
	}
	index++;
	pb(list_a, list_b);
	if (ft_lstsize(*list_a) > 3)
		ft_sort_middle(list_a, list_b, index);
	if (!ft_is_sorted(*list_a))
		ft_sort_little(list_a, size - 1);
	while (*list_b)
		pa(list_a, list_b);
}

void	ft_radix(t_list **list_a, t_list **list_b)
{
	t_list	*num;
	int		len;
	int		max_bits;
	int		i;
	int		j;

	len = ft_lstsize(*list_a);
	max_bits = 0;
	while ((len - 1) >> max_bits)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < len)
		{
			num = *list_a;
			if ((num->index >> i) & 1)
				ra(list_a, 1);
			else
				pb(list_a, list_b);
		}
		while (*list_b)
			pa(list_a, list_b);
	}
}

void	ft_algo(t_list **list_a, t_list **list_b)
{
	int	size;

	size = ft_lstsize(*list_a);
	ft_setup_index(list_a);
	if (size <= 3)
		ft_sort_little(list_a, size);
	if (size < 10 && size >= 4)
		ft_sort_middle(list_a, list_b, 0);
	if (size >= 10)
		ft_radix(list_a, list_b);
}
