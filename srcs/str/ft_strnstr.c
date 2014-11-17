/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 14:20:53 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/17 16:27:17 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	while (*s1 && len <= n--)
	{
		if (!ft_memcmp(s1++, s2, len))
			return ((char *)s1 - 1);
	}
	return (NULL);
}
