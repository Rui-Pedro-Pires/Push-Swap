/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:22:46 by ruiolive          #+#    #+#             */
/*   Updated: 2023/10/31 16:27:55 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap_a(list	*stack_a)
{
	int	x;

	x = stack_a->nb;
	stack_a->nb = stack_a->next->nb;
	stack_a->next->nb = x;
	printf("%s\n", "sa");
}

void	ft_swap_b(list	*stack_b)
{
	int	x;

	x = stack_b->nb;
	stack_b->nb = stack_b->next->nb;
	stack_b->next->nb = x;
	printf("%s\n", "sa");
}

void	ft_swap_a_b(list *stack_a, list *stack_b)
{
	int	x;
	int	j;

	x = stack_a->nb;
	stack_a->nb = stack_a->next->nb;
	stack_a->next->nb = x;
	j = stack_b->nb;
	stack_b->nb = stack_b->next->nb;
	stack_b->next->nb = j;
	printf("%s\n", "ss");
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
	printf("%s\n", "pa");
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
	printf("%s\n", "pb");
}