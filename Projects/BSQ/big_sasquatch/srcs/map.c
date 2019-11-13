/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 19:17:47 by wiwang            #+#    #+#             */
/*   Updated: 2019/11/12 17:00:13 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		map_length(char *map_str)
{
	int len;

	len = 0;
	while (*map_str != '\n')
		map_str++;
	while (*map_str != '\n')
		len++;
	return (len);
}

int		map_lines(char *map_str)
{
	int line_num;

	line_num = ft_atoi(map_str);
	return (line_num);
}

void	print_map(char **map, char *map_str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < map_lines(map_str))
	{
		j = 0;
		while (j < map_length(map_str))
		{
			write(1, &map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}

char	**map_create(char *map_str)
{
	char	**map;
	int		i;
	int		j;

	i = 0;
	j = 0;
	map = (char **)malloc(ft_strlen(map_str));
	while (*map_str != '\n')
		map_str++;
	while (*map_str != '\0')
	{
		if (*map_str != '\n')
		{
			map[i][j] = *map_str;
			j++;
		}
		if (*map == '\n')
		{
			map[i][j] = '\0';
			i++;
			j = 0;
		}
		map_str++;
	}
	return (map);
}

char	*map_chars(char *map_str)
{
	char	*map_chars_rev;
	char	*map_chars;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	map_chars = malloc(3);
	map_chars_rev = malloc(3);
	while (map_str[i] != '\n')
		i++;
	i--;
	while (j < 3)
		map_chars_rev[j++] = map_str[i--];
	j--;
	while (k < 3)
		map_chars[k++] = map_chars_rev[j--];
	return (map_chars);
}
