/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:58:44 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/02 15:54:56 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_creat_list_str(list **stack_a, char *numbers)
{
	int		i;
	char	**numbers_splited;
	
	numbers_splited = ft_split(numbers, ' ');
	i = 0;
	if (!ft_check_numbers_str(numbers_splited))
		return ;
	while (numbers_splited[i])
	{
		ft_creat_new_node(stack_a, ft_atoi(numbers_splited[i]));
		i++;
	}
}

void	ft_creat_list_arg(list **stack_a, char **numbers)
{
	int	i;
	
	i = 1;
	if (!ft_check_numbers_arg(numbers))
		return ;
	while (numbers[i])
	{
		ft_creat_new_node(stack_a, ft_atoi(numbers[i]));
		i++;
	}
}

void	ft_creat_new_node(list **stack_a, int nb)
{
	list	*new_node;
	list	*last_node;

	new_node = malloc(sizeof(list));
	if (!new_node)
		return ;
	last_node = ft_find_last_node(*stack_a);
	new_node->nb = nb;
	new_node->prev = last_node;
	new_node->next = NULL;
	if (!last_node)
		*stack_a = new_node;
	else
		last_node->next = new_node;
}

void	ft_clean_list(list **stack)
{
	list	*temp;
	
	while (*stack)
	{
		temp = (*stack)->next;
		free (*stack);
		*stack = temp;
	}
	*stack = NULL;
}
