/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mods.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 14:00:28 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/28 09:25:40 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**split_str(const char *str)
{
	char	**split;

	split = ft_strsplit(str, '%');
	return (split);
}

char	*check_mods(const char *str)
{
	int		i;
	int		j;
	char	*mod;

	i = 0;
	j = 0;
	mod = ft_strnew(ft_strlen(str));
	while (str[i] != '\0')
	{
		if (is_printf(str[i]) || ft_isdigit(str[i]) || is_space(str[i]))
		{
			mod[j] = str[i];
			if (ft_isalpha(str[i]) && is_printf(str[i]))
			{
				j++;
				break ;
			}
			i++;
			j++;
		}
		else
			break ;
	}
	mod[j] = '\0';
	return (mod);
}

char	*temp_check(char *split, char *temp)
{
	int	i;

	i = 0;
	temp = check_mods(split);
	if (temp == NULL)
		return (NULL);
	if (is_printf(temp[i]))
		ft_strclr(&temp[i + 1]);
	return (temp);
}

char	**get_mods(char **split)
{
	char	**mods;
	char	*temp;
	int		i;
	int		j;

	if (!(mods = (char **)malloc(sizeof(char *) * arrlen(split))))
		return (NULL);
	i = 0;
	j = 0;
	while (split[i] != NULL)
	{
		if (is_printf(*split[i]) || is_flag(*split[i]))
		{
			temp = temp_check(split[i], temp);
			if (temp == NULL)
				return (NULL);
			mods[j] = ft_strnew(ft_strlen(temp));
			ft_strcpy(mods[j], temp);
			free(temp);
			j++;
		}
		i++;
	}
	mods[j] = NULL;
	return (mods);
}
