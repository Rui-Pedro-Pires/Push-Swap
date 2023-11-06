/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:00:30 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/06 17:02:41 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_three_sort(list **stack_a)
{
	if ((*stack_a)->nb > (*stack_a)->next->nb && (*stack_a)->nb > (*stack_a)->next->next->nb)
		ft_rotate_a(stack_a, false);
	else if ((*stack_a)->next->nb > (*stack_a)->nb && (*stack_a)->next->nb > (*stack_a)->next->next->nb )
		ft_reverse_rotate_a(stack_a, false);
	if ((*stack_a)->nb > (*stack_a)->next->nb)
		ft_swap_a(stack_a, false);
}

void	ft_sort(list **stack_a, list **stack_b)
{
	int	stack_len;

	stack_len = ft_stack_len(*stack_a);
	if (stack_len-- > 3 && !ft_stack_sorted(*stack_a))
		ft_push_b(stack_a, stack_b);
	if (stack_len-- > 3 && !ft_stack_sorted(*stack_a))
		ft_push_b(stack_a, stack_b);
	while (stack_len-- > 3 && !ft_stack_sorted(*stack_a))
	{
		ft_add_elements1(*stack_a, *stack_b);
		ft_move_a_to_b(stack_a, stack_b);
	}
	ft_three_sort(stack_a);
	while (*stack_b)
	{
		ft_add_elements2(*stack_a, *stack_b);
		ft_move_b_to_a(stack_a, stack_b);
	}
	ft_add_index(*stack_a);
	ft_min_to_top(stack_a);	
}