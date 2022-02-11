/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:12:53 by grocha-l          #+#    #+#             */
/*   Updated: 2021/11/15 12:46:49 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		cont;

	cont = 0;
	str = (char *)malloc(sizeof(*s1) * ft_strlen(s1) + 1);
	if (!str)
		return (0);
	while (s1[cont] != '\0')
	{
		str[cont] = s1[cont];
		cont++;
	}
	str[cont] = '\0';
	return (str);
}
