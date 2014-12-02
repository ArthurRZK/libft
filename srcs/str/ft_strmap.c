/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 07:22:01 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/27 07:37:32 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
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
				str[i] = f((char)(s[i]));
			else
				str[i] = s[i];
			i++;
		}
		return (str);
	}
}
