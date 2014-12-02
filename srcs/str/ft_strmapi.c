/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 07:39:09 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/27 07:42:54 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	str = NULL;
	if (s && f)
	{
		i = 0;
		str = ft_strnew(ft_strlen(s));
		while (s[i])
		{
			if (f != NULL)
				str[i] = f((unsigned int) i, (char)(s[i]));
			else
				str[i] = s[i];
			i++;
		}
		return (str);
	}
}
