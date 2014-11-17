/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:29:34 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/17 08:13:38 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_mem(void *b, int c, size_t len)
{
	char	*tmp1;

	tmp1 = b;
	while (len--)
		*tmp1++ = c;
	return (b);
}

void		ft_bzero(void *s, size_t n)
{
	ft_mem(s, '\0', n);
}
