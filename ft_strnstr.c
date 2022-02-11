/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:49:31 by grocha-l          #+#    #+#             */
/*   Updated: 2021/11/30 16:16:29 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	y;
	size_t	cont;
	size_t	old_cont;

	y = 0;
	cont = 0;
	old_cont = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (cont < len && haystack[cont] != '\0')
	{
		old_cont = cont;
		while (haystack[cont] == needle[y] && needle[y] != '\0' && cont < len)
		{
			y++;
			cont++;
		}
		if (y == ft_strlen((char *)needle))
			return ((char *)&haystack[cont - y]);
		cont = old_cont;
		y = 0;
		cont++;
	}
	return (0);
}
