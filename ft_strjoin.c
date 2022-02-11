/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:05:56 by grocha-l          #+#    #+#             */
/*   Updated: 2021/11/22 12:20:33 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		cont_1;
	int		cont_2;

	if (!s1 || !s2)
		return (0);
	new_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	cont_1 = 0;
	cont_2 = 0;
	if (!new_str)
		return (0);
	while (s1[cont_1] != '\0')
	{
		new_str[cont_1] = s1[cont_1];
		cont_1++;
	}
	while (s2[cont_2] != '\0')
	{
		new_str[cont_1] = s2[cont_2];
		cont_1++;
		cont_2++;
	}
	new_str[cont_1] = '\0';
	return (new_str);
}
