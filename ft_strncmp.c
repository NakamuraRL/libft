/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:41:56 by grocha-l          #+#    #+#             */
/*   Updated: 2021/11/17 15:17:43 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	cont;

	cont = 0;
	while (n > 0 && s1[cont] != '\0' && s2[cont] != '\0')
	{
		if (s1[cont] != s2[cont])
		{
			break ;
		}
		cont++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return ((unsigned char)s1[cont] - (unsigned char)s2[cont]);
}
