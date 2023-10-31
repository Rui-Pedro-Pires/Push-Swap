/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithms.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:00:30 by ruiolive          #+#    #+#             */
/*   Updated: 2023/10/31 18:11:39 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_two_sort(list *stack_a)
{
	if (stack_a->nb > stack_a->next->nb)
		ft_swap_a(stack_a);
}

void	ft_three_sort(list **stack_a)
{
	if ((*stack_a)->nb > (*stack_a)->next->nb && (*stack_a)->nb > (*stack_a)->next->next->nb)
		ft_rotate_a(stack_a);
	else if ((*stack_a)->next->nb > (*stack_a)->nb && (*stack_a)->next->nb > (*stack_a)->next->next->nb )
		ft_reverse_rotate_a(stack_a);
	if ((*stack_a)->nb > (*stack_a)->next->nb)
		ft_swap_a(*stack_a);
}

void	ft_split_list(list **stack_a, list **stack_b)
{
	int	x;

	x = ft_stack_len(*stack_a) / 2;
	while (x--)
		ft_push_b(stack_a, stack_b);
}

void	ft_merge_list(list **stack_a, list **stack_b)
{
	
	list	*temp;
	list	*new_head;
	
	temp = NULL;
	if ((*stack_a)->nb < (*stack_b)->nb)
	{
		temp = *stack_a;
		*stack_a = temp->next;
	}
	else
	{
		temp = *stack_b;
		*stack_b = temp->next;
	}
	new_head = temp;
	while (*stack_a && *stack_b)
	{
		if ((*stack_a)->nb < (*stack_b)->nb)
		{
			temp->next = *stack_a;
			temp = *stack_a;
			*stack_a = temp->next;
		}
		else
		{
			temp->next = *stack_b;
			temp = *stack_b;
			*stack_b = temp->next;
		}
		if (!(*stack_a))
			temp->next = *stack_b;
		else if (!(*stack_b))
			temp->next = *stack_a;
	}
	*stack_a = new_head;
}

// void	ft_merge_sort(list **stack_a, list **stack_b)
// {
// 	if ()
// }