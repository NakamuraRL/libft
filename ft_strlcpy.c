/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:19:19 by grocha-l          #+#    #+#             */
/*   Updated: 2021/10/27 14:25:07 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	cont;
	unsigned int	size_src;

	cont = 0;
	size_src = 0;
	while (src[size_src] != '\0')
	{
		size_src++;
	}
	if (dstsize > 0)
	{
		while (src[cont] != '\0' && cont < (dstsize - 1))
		{
			dst[cont] = src[cont];
			cont++;
		}
		dst[cont] = '\0';
	}
	return (size_src);
}
