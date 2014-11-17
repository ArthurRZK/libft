/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 12:50:21 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/17 15:16:30 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	dst = (unsigned char *)s1;
	src = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	if (dst == NULL || src == NULL)
		return (0);
	while (dst[i] == src[i])
	{
		if (i == (n - 1))
			return (0);
		i++;
	}
	return (dst[i] - src[i]);
}
