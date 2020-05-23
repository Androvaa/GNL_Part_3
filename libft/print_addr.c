/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_addr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 14:21:23 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/27 13:39:25 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		print_addr(void *var)
{
	uintptr_t	num;
	int			count;
	char		*hex;
	char		*p;
	int			i;

	num = (uintptr_t)var;
	hex = "0123456789abcdef";
	p = ft_strnew(16);
	i = 16;
	if (num == 0)
		return (ft_putstr("0x0"));
	while (i > 0)
	{
		i--;
		p[i] = hex[num % 16];
		num /= 16;
	}
	while (p[i] == '0')
		i++;
	count = ft_putstr("0x");
	count += ft_putstr(&p[i]);
	return (count);
}
