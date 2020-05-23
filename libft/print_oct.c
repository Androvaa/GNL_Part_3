/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_oct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 16:28:25 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/27 13:46:15 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		print_oct(unsigned int n)
{
	int		count;
	char	*arr;
	char	*num;
	int		i;

	count = 0;
	arr = "012345679";
	num = ft_strnew(numlen(n));
	i = 0;
	if (n == 0)
		return (ft_putchar('0'));
	while (n > 0)
	{
		num[i] = arr[n % 8];
		n /= 8;
		i++;
	}
	while (i > 0)
	{
		i--;
		count += ft_putchar(num[i]);
	}
	return (count);
}
