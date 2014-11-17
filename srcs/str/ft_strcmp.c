/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 18:46:35 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/17 06:19:14 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (*s1++)
		a++;
	while (*s2++)
		b++;
	return ((a - b));
}