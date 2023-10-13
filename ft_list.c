/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 14:25:49 by jgasparo          #+#    #+#             */
/*   Updated: 2023/09/25 09:54:35 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *list)
{
	int	i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

static t_list	*ft_lstnew(int data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = data;
	node->next = NULL;
	return (node);
}

t_list	*ft_insertnode(t_list *list, int data)
{
	t_list	*new_node;
	t_list	*current;

	new_node = ft_lstnew(data);
	if (list == NULL)
		list = new_node;
	else
	{
		current = list;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (list);
}

void	ft_freelist(t_list *list)
{
	t_list	*temp;

	temp = NULL;
	while (list)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}
