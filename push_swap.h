/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:45:06 by jgasparo          #+#    #+#             */
/*   Updated: 2023/09/27 10:35:52 by jgasparo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

// ALGO
int		sa(t_list **list, int f);
void	sb(t_list **list, int f);
void	ss(t_list **list_a, t_list **list_b);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	ra(t_list **list_a, int f);
void	rb(t_list **list_b, int f);
void	rr(t_list **list_a, t_list **list_b);
int		rra(t_list **list_a, int f);
void	rrb(t_list **list_b, int f);
void	rrr(t_list **list_a, t_list **list_b);
void	ft_sort_little(t_list **list, int size);
void	ft_sort_middle(t_list **list_a, t_list **list_b, int index);
void	ft_radix(t_list **list_a, t_list **list_b);
void	ft_algo(t_list **list_a, t_list **list_b);

// UTILS
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
char	**ft_parse(char *input);
t_list	*ft_initialize(char **input);

// LIST
void	ft_freelist(t_list *list);
t_list	*ft_insertnode(t_list *list, int data);
int		ft_lstsize(t_list *list);
void	ft_setup_index(t_list **list_a);

// CHECKERS
int		ft_is_sorted(t_list *list);
int		ft_check_letters(char *str);
void	ft_checking_double(t_list **list_a);

// FINDER
int		ft_find_min_index(t_list *list);

// ERROR
void	ft_error(t_list *list, int i);

#endif