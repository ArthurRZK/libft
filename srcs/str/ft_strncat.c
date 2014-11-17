/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 18:28:10 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/17 10:43:59 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s1_begin;

	s1_begin = s1;
	while (*s1)
		s1++;
	while (n--)
	{
			if (!(*s1 = *s2++))
				return (s1_begin);
	}
	*s1 = '\0';
	return (s1_begin);
}
