/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 19:02:41 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/17 08:14:55 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (!n)
		return (0);
	while (n--)
	{
		while (*s1++)
			a++;
		while (*s2++)
			b++;
	}
	return ((a - b));
}
