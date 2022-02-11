/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:39:19 by grocha-l          #+#    #+#             */
/*   Updated: 2021/11/24 17:37:41 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	cont;
	int		minus;
	long	ret;

	cont = 0;
	minus = 1;
	ret = 0;
	while (str[cont] == 32 || (str[cont] >= 9 && str[cont] <= 13))
		cont++;
	if (str[cont] == '+' || str[cont] == '-')
	{
		if (str[cont] == '-')
			minus *= -1;
		cont++;
	}
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		ret = ret * 10 + (str[cont] - '0');
		cont++;
	}
	return (ret * minus);
}
