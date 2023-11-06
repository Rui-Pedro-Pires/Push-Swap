/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:43:04 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/06 15:58:47 by ruiolive         ###   ########.fr       */
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

typedef struct t_list 
{
	int	nb;
	int	index;
	int	push_nmoves;
	bool	cheapest;
	bool	above_median;
	struct t_list	*target;
	struct t_list	*next;
	struct t_list	*prev;
}	list;

/////////////////////////////////
// Functions to creat the list //
/////////////////////////////////

void	ft_creat_list_str(list **stack_a, char *numbers);
void	ft_creat_list_arg(list **stack_a, char **numbers);
void	ft_creat_new_node(list **stack_a, int nb);
void	ft_creat_list(list **stack_a, int argc, char **argv);
void	ft_clean_list(list **stack);

/////////////////////////////////////////
// Utils functions to use on the lists //
/////////////////////////////////////////

int	ft_stack_len(list *stack);
int	ft_check_numbers_arg(char **numbers);
int	ft_check_numbers_str(char **numbers);
list	*ft_find_last_node(list *stack_a);

////////////////////
// Swap functions //
////////////////////

void	ft_swap_a(list	**stack_a, bool print);
void	ft_swap_b(list	**stack_b, bool print);
void	ft_swap_a_b(list **stack_a, list **stack_b);
void	ft_push_a(list **stack_a, list **stack_b);
void	ft_push_b(list **stack_a, list **stack_b);
void	ft_rotate_a(list **stack_a, bool print);
void	ft_rotate_b(list **stack_b, bool print);
void	ft_rotate_a_b(list **stack_a, list **stack_b);
void	ft_reverse_rotate_a(list **stack_a, bool print);
void	ft_reverse_rotate_b(list **stack_b, bool print);
void	ft_reverse_rotate_a_b(list **stack_a, list **stack_b);

///////////////////////
// Algorithmicssssss //
///////////////////////

void	ft_three_sort(list **stack_a);
void	ft_sort(list **stack_a, list **stack_b);

/////////////////////////////
// Algorithmicssssss Utils //
/////////////////////////////

void	ft_add_index(list *stack);
list	*ft_max_node(list *stack);
int		ft_stack_sorted(list *stack);
void	ft_add_elements1(list *stack_a, list *stack_b);
void	ft_add_elements2(list	*stack_a, list	*stack_b);
void	ft_target_a(list *stack_a, list *stack_b);
void	ft_target_b(list *stack_a, list *stack_b);
void	ft_cheapest_node(list *stack);
void	ft_calc_cost(list *stack_a, list *stack_b);
list	*ft_min_node(list *stack);
void	ft_min_to_top(list **stack_a);
void	ft_move_to_a(list **stack_a, list **stack_b);
void	ft_move_to_b(list **stack_a, list **stack_b);
list	*ft_get_cheapest_node(list *stack);
void	ft_prep_push(list **stack, list *target, int x);
void	ft_rotate(list **stack_a, list **stack_b, list *target_node);
void	ft_reverse_rotate(list **stack_a, list **stack_b, list *target_node);

#endif