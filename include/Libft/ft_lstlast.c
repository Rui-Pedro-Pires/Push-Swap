/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:20:59 by inessilva         #+#    #+#             */
/*   Updated: 2023/11/09 10:24:12 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_listt	*ft_lstlast(t_listt *lst)
{
	t_listt	*tmp1;
	t_listt	*tmp2;

	tmp1 = lst;
	if (!tmp1)
		return (tmp1);
	while (tmp1)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
	}
	return (tmp2);
}
