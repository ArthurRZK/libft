/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 15:59:58 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/17 16:15:13 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../libft.h"
#include <stdlib.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	char	*tmp;
	size_t	i;

	s1 = (char *)dst;
	s2 = (char *)src;
	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	tmp = (char *)malloc(sizeof(*tmp) * ft_strlen(s2));
	if (tmp == NULL)
		return (0);
	tmp = ft_strcpy(tmp, s2);
	while (i < len)
	{
		s1[i] = tmp[i];
		i++;
	}
	return (s1);
}
