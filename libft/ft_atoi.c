/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 08:55:33 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/06/18 16:35:31 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long	i;
	long	num;
	long	total;
	long	operator;

	i = 0;
	num = 0;
	total = 0;
	operator = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			operator = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num = str[i] - 48;
		total = (total * 10) + num;
		i++;
	}
	return (total * operator);
}
