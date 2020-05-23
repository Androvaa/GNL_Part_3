/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 13:38:13 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/27 13:46:06 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_operator(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	num_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		operator;
	char	*str;

	len = num_len(n);
	if (!len && !n)
		return (NULL);
	if (n < 0)
		operator = -1;
	else
		operator = 1;
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	len--;
	while (len >= 0)
	{
		str[len] = ft_operator(n % 10) + 48;
		n = ft_operator(n / 10);
		len--;
	}
	if (operator == -1)
		str[0] = '-';
	return (str);
}
