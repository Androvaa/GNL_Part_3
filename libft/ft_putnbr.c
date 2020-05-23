/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 14:04:21 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/21 10:45:58 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define MAX (2147483647)
#define MIN (-2147483648)

int		ft_putnbr(int n)
{
	int		count;

	count = 0;
	if (n < MIN || n > MAX)
		return (count);
	if (n == MIN)
	{
		count += ft_putstr("-2147483648");
		return (count);
	}
	if (n < 0)
	{
		n = -n;
		count += ft_putchar('-');
	}
	if (n < 10)
	{
		count += ft_putchar(n + 48);
		return (count);
	}
	count += ft_putnbr(n / 10);
	count += ft_putchar((n % 10) + 48);
	return (count);
}
