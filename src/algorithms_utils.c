/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:02:09 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/02 17:28:04 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_add_elements(list *stack_a, list *stack_b)
{
	ft_add_index(stack_a);
	ft_add_index(stack_b);
	ft_target(stack_a, stack_b);
}

int	ft_stack_sorted(list *stack)
{
	list	*temp;

	temp = stack->next;
	while (stack->next)
	{
		while (temp)
		{
			if (stack->nb > temp->nb)
				return (0);
			temp = temp->next;
		}
		stack = stack->next;
	}
	return (1);
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
			stack->above_median = false;
		else
			stack->above_median = true;
		i++;
		stack = stack->next;
	}
}

