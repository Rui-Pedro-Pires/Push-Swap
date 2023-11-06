/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms_utils1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:02:09 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/06 18:23:20 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_add_elements1(list *stack_a, list *stack_b)
{
	ft_add_index(stack_a);
	ft_add_index(stack_b);
	ft_target_a(stack_a, stack_b);
	ft_calc_cost(stack_a, stack_b);
	ft_cheapest_node(stack_a);
}

void	ft_add_elements2(list *stack_a, list *stack_b)
{
	ft_add_index(stack_a);
	ft_add_index(stack_b);
	ft_target_b(stack_a, stack_b);
}

int	ft_stack_sorted(list *stack)
{
	int	i;
	int	x;

	x = ft_stack_len(stack);
	i = 0;
	while (stack->next)
	{
		if (stack->nb < stack->next->nb)
			i++;
		stack = stack->next;
	}
	i++;
	if (i == x)
		return (1);
	return (0);
}

void	ft_add_index(list *stack)
{
	int	i;
	int	mid;
	
	i = 0;
	if (!stack)
		return ;
	mid = ft_stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= mid)
			stack->above_median = true;
		else
			stack->above_median = false;
		i++;
		stack = stack->next;
	}
}

