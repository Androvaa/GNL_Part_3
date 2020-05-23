/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 14:33:07 by nmatutoa          #+#    #+#             */
/*   Updated: 2018/09/16 16:07:58 by nmatutoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"

void	join(char **line, char *add)
{
	char	*old;

	if (*line != NULL)
	{
		old = *line;
		*line = ft_strjoin(old, add);
		free(old);
	}
	else
		*line = ft_strdup(add);
	free(add);
}

int		info_check(char *str, char **line, char **save)
{
	char	*info;
	char	*newline;
	int		ret;

	info = NULL;
	ret = 0;
	newline = ft_strchr(str, '\n');
	if (newline != NULL)
	{
		info = ft_strsub(str, 0, ft_strlen(str) - ft_strlen(newline));
		*save = ft_strdup(&newline[1]);
		ret = 1;
	}
	else
		info = ft_strdup(str);
	join(line, info);
	return (ret);
}

int		nl_split(char *str, char **line, char **save)
{
	int		nl;

	nl = 0;
	if (*save != NULL)
		ft_strdel(save);
	nl = info_check(str, line, save);
	return (nl);
}

int		get_next_line(const int fd, char **line)
{
	static char	*save = NULL;
	char		*str;
	int			bytes;
	char		buf[BUFF_SIZE + 1];

	bytes = 1;
	str = save;
	save = NULL;
	if (fd < 0 || line == NULL || !line)
		return (-1);
	*line = NULL;
	while (nl_split(str, line, &save) == 0 && bytes != 0)
	{
		if (str != NULL)
			free(str);
		bytes = read(fd, buf, BUFF_SIZE);
		if (bytes < 0)
			return (-1);
		buf[bytes] = '\0';
		str = ft_strdup(buf);
	}
	free(str);
	if (bytes != 0 || ft_strlen(*line) != 0)
		return (1);
	return (0);
}
