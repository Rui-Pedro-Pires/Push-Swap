/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:43:04 by ruiolive          #+#    #+#             */
/*   Updated: 2023/10/31 17:59:10 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "Libft/libft.h"
# include <stdio.h>

typedef struct t_list 
{
	int	nb;
	struct t_list	*next;
	struct t_list	*prev;
}	list;
/////////////////////////////////
// Functions to creat the list //
/////////////////////////////////

void	ft_creat_list_str(list **stack_a, char *numbers);
void	ft_creat_list_arg(list **stack_a, char **numbers);
void	ft_creat_new_node(list **stack_a, int nb);
void	ft_clean_list(list **stack);

/////////////////////////////////////////
// Utils functions to use on the lists //
/////////////////////////////////////////

int	ft_stack_len(list *stack);
int	ft_check_numbers_arg(char **numbers);
int	ft_check_numbers_str(char **numbers);
list	*ft_find_first_node(list *stack);
list	*ft_find_last_node(list *stack_a);

////////////////////
// Swap functions //
////////////////////

void	ft_swap_a(list	*stack_a);
void	ft_swap_b(list	*stack_b);
void	ft_swap_a_b(list *stack_a, list *stack_b);
void	ft_push_a(list **stack_a, list **stack_b);
void	ft_push_b(list **stack_a, list **stack_b);
void	ft_rotate_a(list **stack_a);
void	ft_rotate_b(list **stack_b);
void	ft_rotate_a_b(list **stack_a, list **stack_b);
void	ft_reverse_rotate_a(list **stack_a);
void	ft_reverse_rotate_b(list **stack_b);
void	ft_reverse_rotate_a_b(list **stack_a, list **stack_b);

///////////////////////
// Algorithmicssssss //
///////////////////////

void	ft_two_sort(list *stack_a);
void	ft_three_sort(list **stack_a);
void	ft_split_list(list **stack_a, list **stack_b);
void	ft_merge_list(list **stack_a, list **stack_b);

#endif