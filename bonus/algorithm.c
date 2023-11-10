/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:12:10 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/10 09:48:47 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	ft_algorithm(t_list **stack_a, t_list **stack_b)
{
	char	command[10];
	int	n;

	while ((n = read(STDIN_FILENO, command, 10)) > 0)
	{
		command[n] = '\0';
		if (!ft_sort_checker(stack_a, stack_b, command))
			return (0);
	}
	return (1);
}
int	ft_sort_checker(t_list **stack_a, t_list **stack_b, char *command)
{
	if (ft_strcmp(command, "sa\n") == 0)
		ft_swap_a(stack_a);
	else if (ft_strcmp(command, "sb\n") == 0)
		ft_swap_b(stack_b);
	else if (ft_strcmp(command, "ss\n") == 0)
		ft_swap_a_b(stack_a, stack_b);
	else if (ft_strcmp(command, "pa\n") == 0)
		ft_push_a(stack_a, stack_b);
	else if (ft_strcmp(command, "pb\n") == 0)
		ft_push_b(stack_a, stack_b);
	else if (ft_strcmp(command, "ra\n") == 0)
		ft_rotate_a(stack_a);
	else if (ft_strcmp(command, "rb\n") == 0)
		ft_rotate_b(stack_b);
	else if (ft_strcmp(command, "rr\n") == 0)
		ft_rotate_a_b(stack_a, stack_b);
	else if (ft_strcmp(command, "rra\n") == 0)
		ft_reverse_rotate_a(stack_a);
	else if (ft_strcmp(command, "rrb\n") == 0)
		ft_reverse_rotate_b(stack_b);
	else if (ft_strcmp(command, "rrr\n") == 0)
		ft_reverse_rotate_a_b(stack_a, stack_b);
	else
	{
		ft_printf("ERROR\n");
		return (0);
	}
	return (1);
}

void	ft_clean(t_list **stack_a, t_list **stack_b)
{
	if (stack_a)
		ft_clean_list(stack_a);
	if (stack_b)
		ft_clean_list(stack_b);
}