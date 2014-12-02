/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 10:14:47 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/27 10:26:21 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	len;
	char	*str;

	if (!*s)
		return (NULL);
	while (*s && ft_isspace((unsigned char)*s))
		s++;
	len = ft_strlen(s);
	while (*s && ft_isspace((unsigned char)s[--len]))
		;
	if (!(str = ft_strnew(len)))
		return (NULL);
	str = ft_strncpy(str, s, len + 1);
	str[len + 1] = '\0';
	return (str);
}
