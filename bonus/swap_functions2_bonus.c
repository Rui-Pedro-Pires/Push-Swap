/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions2_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:38:38 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/10 18:38:43 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ft_rotate_a(t_list **stack_a)
{
	t_list	*temp;
	t_list	*last_node;

	if (!(*stack_a))
		return ;
	last_node = ft_find_last_node(*stack_a);
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	last_node->next = temp;
	temp->prev = last_node;
}

void	ft_rotate_b(t_list **stack_b)
{
	t_list	*temp;
	t_list	*last_node;

	if (!(*stack_b))
		return ;
	last_node = ft_find_last_node(*stack_b);
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	if (*stack_b)
		(*stack_b)->prev = NULL;
	last_node->next = temp;
	temp->prev = last_node;
}

void	ft_rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a)
		ft_rotate_a(stack_a);
	if (*stack_b)
		ft_rotate_b(stack_b);
}

void	ft_reverse_rotate_a(t_list **stack_a)
{
	t_list	*temp;
	t_list	*last_node;

	if (!(*stack_a))
		return ;
	last_node = ft_find_last_node(*stack_a);
	last_node->next = *stack_a;
	(*stack_a)->prev = last_node;
	*stack_a = (*stack_a)->prev;
	temp = last_node->prev;
	temp->next = NULL;
}

void	ft_reverse_rotate_b(t_list **stack_b)
{
	t_list	*temp;
	t_list	*last_node;

	if (!(*stack_b))
		return ;
	last_node = ft_find_last_node(*stack_b);
	last_node->next = *stack_b;
	(*stack_b)->prev = last_node;
	*stack_b = (*stack_b)->prev;
	temp = last_node->prev;
	temp->next = NULL;
}
