/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms_utils4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:29:43 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/06 17:30:54 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

list	*ft_max_node(list *stack)
{
	list	*max_node;

	while (stack)
	{
		
		stack = stack->next;
	}
	return (max_node);
}