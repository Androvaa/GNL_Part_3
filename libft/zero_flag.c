/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:51:39 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/25 13:05:09 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		find_zero(char *str)
{
	int		i;
	char	*zero;
	int		num;

	i = 0;
	num = 0;
	if (ft_strchr(str, '0'))
	{
		zero = ft_strdup(ft_strchr(str, '0'));
		while (ft_isdigit(zero[i]) && zero[i] != '\0')
			i++;
		if (!ft_isdigit(zero[i]) && zero[i] != '\0')
			ft_strclr(&zero[i]);
		num = ft_atoi(zero);
		free(zero);
	}
	return (num);
}

int		print_zero(int zero, int num)
{
	int len;
	int	count;

	len = numlen(num);
	count = 0;
	while (len < zero)
	{
		count += ft_putnbr(0);
		zero--;
	}
	return (count);
}
