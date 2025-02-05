/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finder.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:40:56 by jgasparo          #+#    #+#             */
/*   Updated: 2023/09/25 13:59:05 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_min_index(t_list *list)
{
	int	min_value;
	int	min_idx;
	int	current_idx;
	int	value;

	min_idx = 0;
	current_idx = 0;
	min_value = list->index;
	while (list)
	{
		value = list->index;
		if (value < min_value)
		{
			min_value = value;
			min_idx = current_idx;
		}
		list = list->next;
		current_idx++;
	}
	return (min_idx);
}
