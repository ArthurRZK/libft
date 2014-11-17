/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 22:02:36 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/05 22:12:53 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_memalloc(size_t size)
{
	char *mem;

	mem = malloc(size * sizeof(int));
	if ((mem = NULL))
		return (NULL);
	else
		return (mem);
}
