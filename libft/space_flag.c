/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:30:43 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/25 12:55:13 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		find_space(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (is_space(str[i]) == 1)
	{
		i++;
		if (!ft_isdigit(str[i]))
			return (1);
	}
	if (!ft_isdigit(str[i]) && str[i] != '\0')
		ft_strclr(&str[i]);
	num = ft_atoi(&str[i]);
	return (num);
}

int		print_space(int num, char *str)
{
	int	len;
	int	count;

	len = ft_strlen(str);
	count = 0;
	if (num == 1 || num == 0)
	{
		count += ft_putchar(' ');
		return (count);
	}
	while (len < num)
	{
		count += ft_putchar(' ');
		num--;
	}
	return (count);
}
