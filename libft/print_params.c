/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 16:19:24 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/27 13:26:39 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		print_char_params(va_list list, char *mod)
{
	char	c;
	int		count;

	mod = NULL;
	c = get_char_params(list);
	count = ft_putchar(c);
	return (count);
}

int		print_str_params(va_list list, char *mod)
{
	char	*str;
	int		count;

	mod = NULL;
	str = get_str_params(list);
	count = ft_putstr(str);
	return (count);
}

int		print_int_params(va_list list, char *mod)
{
	int		zero;
	int		num;
	char	*itoa;
	int		count;

	num = get_int_params(list);
	zero = find_zero(mod);
	itoa = ft_itoa(num);
	count = 0;
	if (is_space(*mod) || (ft_isdigit(*mod) && !ft_isdigit(*mod)))
	{
		if (num > 0)
			count += print_space(find_space(mod), itoa);
	}
	if (zero != 0)
		count += print_zero(zero, num);
	count += ft_putstr(itoa);
	free(itoa);
	return (count);
}

int		print_unsigned_params(va_list list, char *mod)
{
	int		zero;
	int		num;
	char	*itoa;
	int		count;

	zero = find_zero(mod);
	num = get_unsigned_params(list);
	itoa = ft_itoa_unsigned(num);
	count = 0;
	if (zero != 0)
		count += print_zero(zero, num);
	count += ft_putstr(itoa);
	free(itoa);
	return (count);
}

int		print_other_params(va_list list, char *mod)
{
	int		zero;
	int		num;
	void	*p;
	int		count;

	zero = find_zero(mod);
	count = 0;
	if (ft_strchr(mod, 'o') || ft_strchr(mod, 'O') || ft_strchr(mod, 'x') ||
			ft_strchr(mod, 'X'))
		num = get_int_params(list);
	if (zero != 0)
		count += print_zero(zero, num);
	if (ft_strchr(mod, 'x') || ft_strchr(mod, 'X'))
	{
		count += print_hex(num, mod);
	}
	if (ft_strchr(mod, 'o') || ft_strchr(mod, 'O'))
		count += print_oct(num);
	else if (ft_strchr(mod, 'p'))
	{
		p = get_void_params(list);
		count += print_addr(p);
	}
	return (count);
}
