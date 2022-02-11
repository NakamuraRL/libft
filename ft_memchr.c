/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:47:13 by grocha-l          #+#    #+#             */
/*   Updated: 2021/11/29 12:41:41 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	cont;
	char	*st;

	cont = 0;
	st = (char *)s;
	while (cont < n)
	{
		if (st[cont] == (char)c)
			return ((void *)&st[cont]);
		cont++;
	}
	return (0);
}
