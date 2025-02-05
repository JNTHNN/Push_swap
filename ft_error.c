/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:26:21 by jgasparo          #+#    #+#             */
/*   Updated: 2025/02/05 20:20:54 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_list *list, int i)
{
	if (i == 1)
		ft_freelist(list);
	if (i == 2)
	{
		ft_freelist(list);
		exit(0);
	}
	write(2, "Error\n", 6);
	exit(1);
}
