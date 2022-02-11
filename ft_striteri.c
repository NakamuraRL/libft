/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grocha-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:39:49 by grocha-l          #+#    #+#             */
/*   Updated: 2021/11/17 16:54:46 by grocha-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	cont;

	cont = 0;
	if (!s || !f)
		return ;
	while (s[cont] != '\0')
	{
		f (cont, &s[cont]);
		cont++;
	}
}
