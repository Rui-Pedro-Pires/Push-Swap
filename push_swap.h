/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:43:04 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/09 09:30:51 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "include/Libft/libft.h"
# include "include/ft_printf/ft_printf.h"
# include <stdio.h>
# include <stdbool.h>

typedef struct s_list 
{
	int	nb;
	int	index;
	int	push_nmoves;
	bool	cheapest;
	bool	above_median;
	struct s_list	*target;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

/////////////////////////////////
// Functions to creat the t_list //
/////////////////////////////////

void	ft_creat_list_str(t_list **stack_a, char *numbers);
void	ft_creat_list_arg(t_list **stack_a, char **numbers);
void	ft_creat_new_node(t_list **stack_a, int nb);
void	ft_creat_list(t_list **stack_a, int argc, char **argv);
void	ft_clean_list(t_list **stack);

/////////////////////////////////////////
// Utils functions to use on the lists //
/////////////////////////////////////////

int	ft_stack_len(t_list *stack);
int	ft_check_numbers_arg(char **numbers);
int	ft_check_numbers_str(char **numbers);
t_list	*ft_find_last_node(t_list *stack_a);

////////////////////
// Swap functions //
////////////////////

void	ft_swap_a(t_list	**stack_a, bool print);
void	ft_swap_b(t_list	**stack_b, bool print);
void	ft_swap_a_b(t_list **stack_a, t_list **stack_b);
void	ft_push_a(t_list **stack_a, t_list **stack_b);
void	ft_push_b(t_list **stack_a, t_list **stack_b);
void	ft_rotate_a(t_list **stack_a, bool print);
void	ft_rotate_b(t_list **stack_b, bool print);
void	ft_rotate_a_b(t_list **stack_a, t_list **stack_b);
void	ft_reverse_rotate_a(t_list **stack_a, bool print);
void	ft_reverse_rotate_b(t_list **stack_b, bool print);
void	ft_reverse_rotate_a_b(t_list **stack_a, t_list **stack_b);

///////////////////////
// Algorithmicssssss //
///////////////////////

void	ft_three_sort(t_list **stack_a);
void	ft_sort(t_list **stack_a, t_list **stack_b);

/////////////////////////////
// Algorithmicssssss Utils //
/////////////////////////////

void	ft_add_index(t_list *stack);
t_list	*ft_max_node(t_list *stack);
int		ft_stack_sorted(t_list *stack);
void	ft_add_elements1(t_list *stack_a, t_list *stack_b);
void	ft_add_elements2(t_list	*stack_a, t_list	*stack_b);
void	ft_target_a(t_list *stack_a, t_list *stack_b);
void	ft_target_b(t_list *stack_a, t_list *stack_b);
void	ft_cheapest_node(t_list *stack);
void	ft_calc_cost(t_list *stack_a, t_list *stack_b);
t_list	*ft_min_node(t_list *stack);
void	ft_min_to_top(t_list **stack_a);
void	ft_move_to_a(t_list **stack_a, t_list **stack_b);
void	ft_move_to_b(t_list **stack_a, t_list **stack_b);
t_list	*ft_get_cheapest_node(t_list *stack);
void	ft_prep_push(t_list **stack, t_list *target, int x);
void	ft_rotate(t_list **stack_a, t_list **stack_b, t_list *target_node);
void	ft_reverse_rotate(t_list **stack_a, t_list **stack_b, t_list *target_node);

#endif