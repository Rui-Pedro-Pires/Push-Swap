/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:42:06 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/09 09:31:39 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (0);
	else
		ft_creat_list(&stack_a, argc, argv + 1);
	if (!stack_a)
	{
		ft_printf("%s\n", "Error");
		return (1);
	}
	if (!ft_stack_sorted(stack_a))
	{
		if (ft_stack_len(stack_a) == 2)
			ft_swap_a(&stack_a, false);
		else if (ft_stack_len(stack_a) == 3)
			ft_three_sort(&stack_a);
		else
			ft_sort(&stack_a, &stack_b);
	}
	ft_clean_list(&stack_a);
	return (0);
}