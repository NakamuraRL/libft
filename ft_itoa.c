/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:42:00 by grocha-l          #+#    #+#             */
/*   Updated: 2021/11/22 14:33:11 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = ft_strlen(str);
	while (j > i)
	{
		j--;
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
	}
	return (str);
}

static unsigned int	ft_intlen(int num)
{
	int	cont;

	cont = 0;
	if (num == -2147483648)
		return (11);
	if (num < 0)
	{
		cont = 1;
		num *= -1;
	}
	while (num > 10)
	{
		num /= 10;
		cont++;
	}
	cont++;
	return (cont);
}

static char	*ft_nbr_is_neg(char *str, int *n)
{
	if (*n == -2147483648)
	{
		ft_memset(str++, '8', 1);
		*n = 214748364;
	}
	else
		*n *= -1;
	return (str);
}

static char	*ft_check_neg(char *str, int minus)
{
	if (minus == 1)
		ft_memset(str++, '-', 1);
	return (str);
}

char	*ft_itoa(int n)
{
	int		minus;
	char	*temp;
	char	*str;

	minus = 0;
	temp = malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (!temp)
		return (NULL);
	str = temp;
	if (n == 0)
		ft_memset(str++, '0', 1);
	if (n < 0)
	{
		str = ft_nbr_is_neg(temp, &n);
		minus = 1;
	}
	while (n != 0)
	{
		ft_memset(str++, (char)(n % 10) + '0', 1);
		n /= 10;
	}
	str = ft_check_neg(str, minus);
	ft_memset(str++, 0, 1);
	ft_strrev(temp);
	return (temp);
}
