/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:47:51 by jgasparo          #+#    #+#             */
/*   Updated: 2023/09/28 16:38:19 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	char	**input;

	if (argc >= 2)
	{
		if (argc == 2)
		{
			input = ft_parse(argv[1]);
			if (!input)
				exit(0);
			list_a = ft_initialize(input);
		}
		if (argc > 2)
				list_a = ft_initialize(&argv[1]);
		ft_checking_double(&list_a);
		if (ft_is_sorted(list_a))
			ft_error(list_a, 2);
		list_b = NULL;
		ft_algo(&list_a, &list_b);
		ft_freelist(list_a);
		ft_freelist(list_b);
	}
	return (0);
}
