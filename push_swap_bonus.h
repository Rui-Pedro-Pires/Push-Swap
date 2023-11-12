/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:43:04 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/10 18:40:30 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include "include/Libft/libft.h"
# include "include/ft_printf/ft_printf.h"
# include <fcntl.h>
# include <stdbool.h>

typedef struct s_list 
{
	int				nb;
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
void	ft_free(char **numbers_splited);

/////////////////////////////////////////
// Utils functions to use on the lists //
/////////////////////////////////////////

int		ft_stack_len(t_list *stack);
int		ft_check_numbers_arg(char **numbers);
int		ft_check_numbers_str(char **numbers);
t_list	*ft_find_last_node(t_list *stack_a);
int		ft_stack_sorted(t_list *stack);

////////////////////
// Swap functions //
////////////////////

void	ft_swap_a(t_list	**stack_a);
void	ft_swap_b(t_list	**stack_b);
void	ft_swap_a_b(t_list **stack_a, t_list **stack_b);
void	ft_push_a(t_list **stack_a, t_list **stack_b);
void	ft_push_b(t_list **stack_a, t_list **stack_b);
void	ft_rotate_a(t_list **stack_a);
void	ft_rotate_b(t_list **stack_b);
void	ft_rotate_a_b(t_list **stack_a, t_list **stack_b);
void	ft_reverse_rotate_a(t_list **stack_a);
void	ft_reverse_rotate_b(t_list **stack_b);
void	ft_reverse_rotate_a_b(t_list **stack_a, t_list **stack_b);

///////////
// BONUS //
///////////

int		ft_sort_checker(t_list **stack_a, t_list **stack_b, char *command);
int		ft_strcmp(char *s1, char *s2);
int		ft_algorithm(t_list **stack_a, t_list **stack_b);
void	ft_clean(t_list **stack_a, t_list **stack_b);

#endif