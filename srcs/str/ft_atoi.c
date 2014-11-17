/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 15:04:12 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/17 15:39:28 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

int			ft_atoi(const char *str)
{
	int		nbr;
	char	sign;

	nbr = 0;
	sign = 1;
	while (*str && ft_isspace((unsigned char)*str))
			*str++;
	if (*str && *str == '-' || *str == '+')
		{
			if (*str == '-')
				sign = -1;
			str++;
		}
	while (*str && ft_isdigit((unsigned char)*str))
	{
		nbr = nbr * 10;
		nbr = nbr + (*str - '0');
		str++;
	}
	return (nbr * sign);
}
