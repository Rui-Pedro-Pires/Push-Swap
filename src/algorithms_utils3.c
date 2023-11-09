/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms_utils3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:15:17 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/09 09:32:10 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_prep_push(t_list **stack, t_list *target, int x)
{
	while ((*stack) != target)
	{
		if (x == 1)
		{
			if (target->above_median)
				ft_rotate_a(stack, false);
			else
				ft_reverse_rotate_a(stack, false);
		}
		else if (x == 2)
		{
			if (target->above_median)
				ft_rotate_b(stack, false);
			else
				ft_reverse_rotate_b(stack, false);
		}
	}
}

void	ft_move_to_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*cheapest_node;

	cheapest_node = ft_get_cheapest_node(*stack_a);
	if (cheapest_node->above_median && cheapest_node->target->above_median)
		ft_rotate(stack_a, stack_b, cheapest_node);
	else if (!(cheapest_node->above_median) && !(cheapest_node->target->above_median))
		ft_reverse_rotate(stack_a, stack_b, cheapest_node);
	ft_prep_push(stack_a, cheapest_node, 1);
	ft_prep_push(stack_b, cheapest_node->target, 2);
	ft_push_b(stack_a, stack_b);
}

void	ft_move_to_a(t_list **stack_a, t_list **stack_b)
{
	ft_prep_push(stack_a, (*stack_b)->target, 1);
	ft_push_a(stack_a, stack_b);
}

void	ft_rotate(t_list **stack_a, t_list **stack_b, t_list *target_node)
{
	while (*stack_a != target_node && *stack_b != (target_node->target))
		ft_rotate_a_b(stack_a, stack_b);
	ft_add_index(*stack_a);
	ft_add_index(*stack_b);
}

void	ft_reverse_rotate(t_list **stack_a, t_list **stack_b, t_list *target_node)
{
	while (*stack_a != target_node && *stack_b != (target_node->target))
		ft_reverse_rotate_a_b(stack_a, stack_b);
	ft_add_index(*stack_a);
	ft_add_index(*stack_b);
}