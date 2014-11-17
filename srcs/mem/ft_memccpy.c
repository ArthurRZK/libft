/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 15:47:25 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/17 15:52:05 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*s1;
	const char	*s2;

	s1 = dst;
	s2 = src;
	while (n--)
	{
		*s1++ = *s2;
		if (*s2 == (unsigned char)c)
			return (s1);
		*s2++;
	}
	return (0);

}
