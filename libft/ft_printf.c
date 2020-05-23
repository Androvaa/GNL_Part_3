/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 11:28:06 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/30 14:04:35 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		print_params(char *mod, va_list list)
{
	int		count;

	count = 0;
	if (ft_strchr(mod, 's'))
		count = print_str_params(list, mod);
	if (ft_strchr(mod, 'i') || ft_strchr(mod, 'd') || ft_strchr(mod, 'D'))
		count = print_int_params(list, mod);
	if (ft_strchr(mod, 'x') || ft_strchr(mod, 'X'))
		count = print_other_params(list, mod);
	if (ft_strchr(mod, 'o') || ft_strchr(mod, 'O'))
		count = print_other_params(list, mod);
	if (ft_strchr(mod, 'u') || ft_strchr(mod, 'U'))
		count = print_unsigned_params(list, mod);
	if (ft_strchr(mod, 'c') || ft_strchr(mod, 'C'))
		count = print_char_params(list, mod);
	if (ft_strchr(mod, 'p'))
		count = print_other_params(list, mod);
	return (count);
}

char	*if_statement(char *mod, char *str)
{
	if (ft_strchr(mod, '0'))
		str++;
	str = &*(str + ft_strlen(mod) + 1);
	return (str);
}

char	*percent_check(char *str, int *count)
{
	char	*s;

	s = &*(str + 1);
	while (*s != '\0')
	{
		if (*s == '%')
		{
			s++;
			*count += ft_putchar('%');
			return (s);
		}
		while (*s == ' ')
			s++;
		if (*s == '%')
		{
			*count += ft_putchar('%');
			return (s);
		}
		if ((*s != ' ' && *s != '%'))
			return (s);
	}
	return (s);
}

int		print_string(char *str, va_list list, char **mods)
{
	int	count;

	count = 0;
	while (*str != '\0' && *str != str[ft_strlen(str)])
	{
		if (*str == '%')
		{
			if (*mods != NULL && ft_strncmp(&*(str + 1), *mods,
						ft_strlen(*mods)) == 0 && **mods != ' ')
			{
				count += print_params(*mods, list);
				str = if_statement(*mods, &*str);
				mods++;
			}
			else
			{
				str = percent_check(str, &count);
			}
		}
		else
			count += ft_putchar(*str) && str++;
	}
	return (count);
}

int		ft_printf(const char *str, ...)
{
	va_list list;
	char	**split;
	char	**mods;
	int		count;
	int		percent;

	if (str == NULL)
	{
		count = ft_putstr(str);
		return (count);
	}
	if ((*str != '%' && is_printf(*(str + 1))) || is_printf(*str))
		split = split_str(ft_strchr(str, '%'));
	else
		split = split_str(str);
	mods = get_mods(split);
	free(split);
	va_start(list, str);
	count = print_string((char *)str, list, mods);
	free(mods);
	va_end(list);
	return (count);
}
