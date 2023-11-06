/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:22:46 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/06 18:12:02 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap_a(list	**stack_a, bool print)
{
	list	*temp;

	temp = (*stack_a)->next->next;
	if (temp)
		temp->prev = *stack_a;
	*stack_a = (*stack_a)->next;
	(*stack_a)->next = (*stack_a)->prev;
	(*stack_a)->next->next = temp;
	(*stack_a)->next->prev = *stack_a;
	(*stack_a)->prev = NULL;
	if (!print)
		ft_printf("%s\n", "sa");
}

void	ft_swap_b(list	**stack_b, bool print)
{
	list	*temp;

	temp = (*stack_b)->next->next;
	if (temp)
		temp->prev = *stack_b;
	*stack_b = (*stack_b)->next;
	(*stack_b)->next = (*stack_b)->prev;
	(*stack_b)->next->next = temp;
	(*stack_b)->next->prev = *stack_b;
	(*stack_b)->prev = NULL;
	if (!print)
		ft_printf("%s\n", "sb");
}

void	ft_swap_a_b(list **stack_a, list **stack_b)
{
	ft_swap_a(stack_a, true);
	ft_swap_b(stack_b, true);
	ft_printf("%s\n", "ss");
}

void	ft_push_a(list **stack_a, list **stack_b)
{
	list	*temp;
	
	if (!*stack_b)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)->next;
	if (*stack_b)
		(*stack_b)->prev = NULL;
	temp->prev = NULL;
	if (*stack_a == NULL)
	{
		*stack_a = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = *stack_a;
		temp->next->prev = temp;
		*stack_a = temp;
	}
	ft_printf("%s\n", "pa");
}

void	ft_push_b(list **stack_a, list **stack_b)
{
	list	*temp;
	
	if (!*stack_a)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	if (*stack_a)
		(*stack_a)->prev = NULL;
	temp->prev = NULL;
	if (*stack_b == NULL)
	{
		*stack_b = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = *stack_b;
		temp->next->prev = temp;
		*stack_b = temp;
	}
	ft_printf("%s\n", "pb");
}