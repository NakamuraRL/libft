/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:51:50 by grocha-l          #+#    #+#             */
/*   Updated: 2021/11/17 14:47:05 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cont;

	cont = 0;
	if (!dst)
	{
		return (0);
	}
	while (cont < n)
	{
		((unsigned char *)dst)[cont] = ((unsigned char *)src)[cont];
		cont++;
	}
	return (dst);
}
