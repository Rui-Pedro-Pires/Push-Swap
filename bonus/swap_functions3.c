/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_functions3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:56:22 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/09 18:36:11 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_reverse_rotate_a_b(t_list **stack_a, t_list **stack_b)
{
	if (!(*stack_a))
		return ;
	if (!(*stack_b))
		return ;
	ft_reverse_rotate_a(stack_a);
	ft_reverse_rotate_b(stack_b);
}
