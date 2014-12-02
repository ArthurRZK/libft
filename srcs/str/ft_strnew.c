/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 22:36:44 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/25 00:35:45 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strnew(size_t size)
{
	char *str;

	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (size)
		str[size--] = '\0';
	return (str);
}
