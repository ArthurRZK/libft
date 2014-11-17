/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 15:52:12 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/17 15:59:44 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void					*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char						*s2 = s;

	while (n--)
	{
		if (*s2 == (unsigned char)c)
			return ((void*)s2);
		*s2++;
	}
	return (NULL);
}
