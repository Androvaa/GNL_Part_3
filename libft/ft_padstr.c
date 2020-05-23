/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:26:05 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/09/04 17:12:38 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_padstr(char *str, int pad)
{
	int	len;
	int	op;

	len = ft_strlen(str);
	op = 0;
	if (pad < 0)
	{
		op = 1;
		pad *= -1;
	}
	if (op == 0)
		ft_putstr(str);
	while (len < pad)
	{
		ft_putchar(' ');
		len++;
	}
	if (op == 1)
		ft_putstr(str);
}
