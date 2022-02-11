/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:54:34 by grocha-l          #+#    #+#             */
/*   Updated: 2021/11/17 14:49:54 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*temp;
	const char	*str;

	if (dst == 0)
	{
		return (NULL);
	}
	if (dst <= src)
	{
		temp = dst;
		str = src;
		while (len--)
			*temp++ = *str++;
	}
	else
	{
		temp = dst;
		temp += len;
		str = src;
		str += len;
		while (len--)
			*--temp = *--str;
	}
	return (dst);
}
