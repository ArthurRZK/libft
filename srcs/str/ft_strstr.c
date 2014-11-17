/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 14:07:41 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/17 15:16:52 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (*s1)
	{
		if (*s1 == *s2)
		{
			if (ft_strncmp(s1, s2, strlen(s2)) == 0)
				return ((char *)s1);
		}
		*s1++;
	}
	return (NULL);
}
