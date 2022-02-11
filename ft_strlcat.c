/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:59:07 by grocha-l          #+#    #+#             */
/*   Updated: 2021/10/27 14:24:27 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dst_len;
	size_t		cont;

	if (dstsize <= ft_strlen(dst))
	{
		return (dstsize + ft_strlen(src));
	}
	dst_len = ft_strlen(dst);
	cont = 0;
	while (src[cont] != '\0' && dst_len + 1 < dstsize)
	{
		dst[dst_len] = src[cont];
		dst_len++;
		cont++;
	}
	dst[dst_len] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[cont]));
}
