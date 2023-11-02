/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:08:13 by ruiolive          #+#    #+#             */
/*   Updated: 2023/10/30 14:57:26 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long 	ft_atoi(const char *str)
{
	int	i;
	int	rec;
	long	dest;

	i = 0;
	rec = 1;
	dest = 0;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		rec = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (-21474856474);
		dest = dest * 10 + (str[i] - '0');
		i++;
	}
	return (dest * rec);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("         3647"));
// 	printf("%d", atoi("   2145"));
// }
