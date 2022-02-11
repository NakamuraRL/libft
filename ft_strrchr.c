/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:11:07 by grocha-l          #+#    #+#             */
/*   Updated: 2021/11/24 17:40:15 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		cont;
	char	*equal;

	cont = 0;
	equal = 0;
	while (s[cont] != '\0')
	{
		if (s[cont] == (char)c)
			equal = (char *)&s[cont];
		cont++;
	}
	if (c == '\0')
		return ((char *)&s[cont]);
	if (equal != 0)
		return (equal);
	return (0);
}
