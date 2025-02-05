/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 15:47:39 by jgasparo          #+#    #+#             */
/*   Updated: 2023/09/27 10:34:40 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_sorted(t_list *list)
{
	if (list == NULL || list->next == NULL)
		return (1);
	while (list->next != NULL)
	{
		if (list->content > list->next->content)
			return (0);
		list = list->next;
	}
	return (1);
}

static int	ft_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_check_letters(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_digit(str[i + 1]) && str[i] == '-')
			return (0);
		if (!ft_digit(str[i]) || (ft_digit(str[i]) && str[i + 1] == '-'))
			ft_error(NULL, 0);
		i++;
	}
	return (0);
}

static void	ft_check_double(t_list *list, int cmp)
{
	while (list)
	{
		if (list->content == cmp)
			ft_error(list, 1);
		else
			list = list->next;
	}
}

void	ft_checking_double(t_list **list_a)
{
	t_list	*cmp_list_a;
	int		cmp;

	cmp_list_a = *list_a;
	while (cmp_list_a)
	{
		cmp = cmp_list_a->content;
		cmp_list_a = cmp_list_a->next;
		ft_check_double(cmp_list_a, cmp);
	}
}
