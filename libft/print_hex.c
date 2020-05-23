/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 10:42:13 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/27 13:29:49 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_hex(unsigned int n, int count)
{
	if (n == 0)
		count = ft_putchar('0');
	return (count);
}

int		print_hex(unsigned int n, char *mod)
{
	char	*arr;
	char	*num;
	int		count;
	int		i;

	if (ft_strchr(mod, 'x'))
		arr = "0123456789abcdef";
	else if (ft_strchr(mod, 'X'))
		arr = "0123456789ABCDEF";
	num = ft_strnew(numlen(n));
	count = 0;
	i = 0;
	count = check_hex(n, count);
	while (n > 0)
	{
		num[i] = arr[n % 16];
		n /= 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		count += ft_putchar(num[i]);
	}
	return (count);
}
