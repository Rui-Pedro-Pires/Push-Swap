/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:42:06 by ruiolive          #+#    #+#             */
/*   Updated: 2023/10/31 18:31:14 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	list	*stack_a;
	list	*stack_b;
	
	stack_a = NULL;
	stack_b = NULL;
	// check if the number of arguments is only 1 check if the number of arguments is 2, but the second arguments comes empty
	if (argc == 1 || argc == 2 && !argv[1][0])
		return (0);
	// creat the linked list (stack_a) with argumento in format of string 
	else if (argc == 2)
		ft_creat_list_str(&stack_a, argv[1]);
	// creat the linked list (stack_a) in case of arguments, formated in not string
	else
		ft_creat_list_arg(&stack_a, argv);
	if (!stack_a)
	{
		printf("%s", "Error");
		return (3);
	}
	//check if the list as only 2 elements
	if (ft_stack_len(stack_a) == 2)
		ft_two_sort(stack_a);
	else if (ft_stack_len(stack_a) == 3)
		ft_three_sort(&stack_a);
	else
	{
		ft_split_list(&stack_a, &stack_b);
		ft_three_sort(&stack_a);
		ft_three_sort(&stack_b);
		ft_merge_list(&stack_a, &stack_b);
	}
	// 	return
	// // check if the stack as only 3 elements
	// else if (ft_stack_len(stack_a) == 3)
	// 	//.......
	// // do the algoritm to sort the numbers
	// else
		//........
	while (stack_a)
	{
		printf("%d\n", stack_a->nb);
		stack_a = stack_a->next;
	}
	printf("---------------\n");
	// ft_clean_list(&stack_a);
	return (0);
}