/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 21:48:05 by inessilva         #+#    #+#             */
/*   Updated: 2023/11/09 10:24:24 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_listt **lst, void (*del)(void *))
{
	t_listt	*tmp1;
	t_listt	*tmp2;

	tmp1 = *lst;
	tmp2 = tmp1;
	while (tmp2)
	{
		tmp2 = tmp2->next;
		del(tmp1->content);
		free(tmp1);
		tmp1 = tmp2;
	}
	*lst = NULL;
}
