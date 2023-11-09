/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:07:55 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/09 09:32:16 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_target_a(t_list *stack_a, t_list *stack_b)
{
	t_list	*temp;
	t_list	*target_node;
	long	number_save;

	while (stack_a)
	{
		number_save = -21474836478;
		temp = stack_b;
		while (temp)
		{
			if (temp->nb < stack_a->nb && temp->nb > number_save)
			{
				number_save = temp->nb;
				target_node = temp;
			}
			temp = temp->next;
		}
		if (number_save == -21474836478)
			stack_a->target = ft_max_node(stack_b);
		else
			stack_a->target = target_node;
		stack_a = stack_a->next;
	}
}

void	ft_target_b(t_list *stack_a, t_list *stack_b)
{
	t_list	*temp;
	t_list	*target_node;
	long	number_save;

	while (stack_b)
	{
		number_save = 21474836478;
		temp = stack_a;
		while (temp)
		{
			if (temp->nb > stack_b->nb && temp->nb < number_save)
			{
				number_save = temp->nb;
				target_node = temp;
			}
			temp = temp->next;
		}
		if (number_save == 21474836478)
			stack_b->target = ft_min_node(stack_a);
		else
			stack_b->target = target_node;
		stack_b = stack_b->next;
	}
}

void	ft_calc_cost(t_list *stack_a, t_list *stack_b)
{
	int	stack_len_a;
	int	stack_len_b;

	stack_len_a = ft_stack_len(stack_a);
	stack_len_b = ft_stack_len(stack_b);
	while (stack_a)
	{
		stack_a->push_nmoves = stack_a->index;
		if (!stack_a->above_median)
			stack_a->push_nmoves = stack_len_a - stack_a->index;
		if (!stack_a->target->above_median)
			stack_a->push_nmoves += stack_len_b - stack_a->target->index;
		else
			stack_a->push_nmoves += stack_a->target->index;
		stack_a = stack_a->next;
	}
}

void	ft_cheapest_node(t_list *stack_a)
{
	t_list	*cheapest_node;
	long	cost;
	if (!stack_a)
		return ;
	cost = 21474836478;
	while (stack_a)
	{
		if (stack_a->push_nmoves < cost)
		{
			cost = stack_a->push_nmoves;
			cheapest_node = stack_a;
		}
		stack_a = stack_a->next;
	}
	cheapest_node->cheapest = true;
}

void	ft_clean_list(t_list **stack)
{
	t_list	*temp;
	
	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}