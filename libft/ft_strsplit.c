/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:40:57 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/08/24 10:26:46 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	int			words;
	int			arr_num;
	char		**array;
	char		*string;
	char		*sub;

	string = alt_strtrim(s, c);
	if (string == NULL)
		return (NULL);
	words = word_count(string, c);
	arr_num = 0;
	if (!(array = (char **)malloc(sizeof(char *) * words + 1)))
		return (NULL);
	while (words--)
	{
		while (*string == c && *string)
			string++;
		sub = ft_strsub(string, 0, word_len(string, c));
		if (!(array[arr_num] = sub))
			return (NULL);
		string = string + word_len(string, c);
		arr_num++;
	}
	array[arr_num] = NULL;
	return (array);
}
