/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:20:40 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/06 16:47:38 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate_a(list **stack_a, bool print)
{
	list	*temp;
	list	*last_node;

	last_node = ft_find_last_node(*stack_a);
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = NULL;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	last_node->next = temp;
	temp->prev = last_node;
	printf("%s\n", "ra");
}

void	ft_rotate_b(list **stack_b, bool print)
{
	list	*temp;
	list	*last_node;

	last_node = ft_find_last_node(*stack_b);
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	temp->next = NULL;
	if (*stack_b)
		(*stack_b)->prev = NULL;
	last_node->next = temp;
	temp->prev = last_node;
	printf("%s\n", "rb");
}

void	ft_rotate_a_b(list **stack_a, list **stack_b)
{
	ft_rotate_a(stack_a);
	ft_rotate_b(stack_b);
	printf("%s\n", "rr");
}

void	ft_reverse_rotate_a(list **stack_a, bool print)
{
	list	*temp;
	list	*last_node;

	last_node = ft_find_last_node(*stack_a);
	last_node->next = *stack_a;
	(*stack_a)->prev = last_node;
	*stack_a = (*stack_a)->prev;
	temp = last_node->prev;
	temp->next = NULL;
	printf("%s\n", "rra");
}

void	ft_reverse_rotate_b(list **stack_b, bool print)
{
	list	*temp;
	list	*last_node;

	last_node = ft_find_last_node(*stack_b);
	last_node->next = *stack_b;
	(*stack_b)->prev = last_node;
	*stack_b = (*stack_b)->prev;
	temp = last_node->prev;
	temp->next = NULL;
	printf("%s\n", "rrb");
}