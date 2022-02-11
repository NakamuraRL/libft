/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:17:52 by grocha-l          #+#    #+#             */
/*   Updated: 2021/11/22 14:42:23 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_equal_set(char c, char const *set)
{
	size_t	cont;

	cont = 0;
	if (!set)
		return (0);
	while (set[cont])
	{
		if (set[cont] == c)
			return (1);
		cont++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		cont;
	int		ini;
	int		fim;
	char	*str;

	cont = 0;
	ini = 0;
	if (!s1)
		return (0);
	fim = ft_strlen(s1);
	while (s1[ini] != '\0' && ft_equal_set(s1[ini], set))
		ini++;
	while (ini < fim && ft_equal_set(s1[fim - 1], set))
		fim--;
	str = (char *)malloc(sizeof(char) * (fim - ini + 1));
	if (!str || !set)
		return (0);
	while (fim - ini)
	{
		str[cont] = s1[ini];
		cont++;
		ini++;
	}
	str[cont] = '\0';
	return (str);
}
