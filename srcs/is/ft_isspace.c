/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arzepka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 15:25:33 by arzepka           #+#    #+#             */
/*   Updated: 2014/11/17 15:25:55 by arzepka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(int c)
{
	if (c < 0 || c > 127)
		return (0);
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
			|| c == '\r' || c == ' ')
		return (1);
	else
		return (0);
}
