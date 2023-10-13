/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 15:07:11 by jgasparo          #+#    #+#             */
/*   Updated: 2023/09/28 15:57:50 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_parse(char *input)
{
	char	**output;

	output = ft_split(input, ' ');
	return (output);
}

t_list	*ft_initialize(char **input)
{
	t_list	*list;
	int		i;
	int		num;

	list = NULL;
	i = 0;
	while (input && input[i])
	{
		ft_check_letters(input[i]);
		num = ft_atoi(input[i]);
		list = ft_insertnode(list, num);
		i++;
	}
	return (list);
}
