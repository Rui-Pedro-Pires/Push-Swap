/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:58:44 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/09 10:27:57 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_creat_list_str(t_list **stack_a, char *numbers)
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

void	ft_creat_list_arg(t_list **stack_a, char **numbers)
{
	int	i;

	i = 0;
	if (!ft_check_numbers_arg(numbers))
		return ;
	while (numbers[i])
	{
		ft_creat_new_node(stack_a, ft_atoi(numbers[i]));
		i++;
	}
}

void	ft_creat_new_node(t_list **stack_a, int nb)
{
	t_list	*new_node;
	t_list	*last_node;

	new_node = malloc(sizeof(t_list));
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

void	ft_creat_list(t_list **stack_a, int argc, char **argv)
{
	if (argc == 2)
		ft_creat_list_str(stack_a, argv[0]);
	else
		ft_creat_list_arg(stack_a, argv);
}
