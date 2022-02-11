/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:36:31 by grocha-l          #+#    #+#             */
/*   Updated: 2021/10/27 14:30:02 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cont;
	unsigned char	*st1;
	unsigned char	*st2;

	cont = 0;
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (cont < n)
	{
		if (st1[cont] != st2[cont])
			return (st1[cont] - st2[cont]);
		cont++;
	}
	return (st1[cont - 1] - st2[cont - 1]);
}
