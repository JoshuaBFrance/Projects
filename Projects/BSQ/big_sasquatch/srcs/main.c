/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrances <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:17:33 by jfrances          #+#    #+#             */
/*   Updated: 2019/11/12 19:33:20 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <functions.h>

void	ft_read_stdin(char *buf, char *map)
{
	int		bytes_read;
	int		buf_size;
	int		i;
	int		j;

	buf_size = 16;
	j = 0;
	buf = (char *)malloc(buf_size);
	while (bytes_read += read(0, buf, buf_size))
	{
		i = 0;
		while (i < buf_size && buf[j++] != '\0')
			i++;
		if (buf[j] == '\0')
			break ;
		buf = ft_realloc(buf, bytes_read);
	}
	map = map_create(buf);
	//solved_map = solve(map);
	print_map(map);
}

void	ft_read_file(char *buf, char *argv[i], char *map)
{
	int		bytes_read;
	int		j;
	int		i;
	int		c;
	int		buf_size;

	buf_size = 16;
	file = open(argv[1], O_RODNLY);
	buf = (char *)malloc(buf_size);
	while (bytes_read += read(argv[1][c++], buf, buf_size))
	{
		i = 0;
		while (i < buf_size && buf[j++] != '\0')
			i++;
		if (buf[j] == '\0')
			break ;
		buf = ft_realloc(buf, bytes_read);
	}
	map = map_create(buf);
	//solved_map = solve(map);
	print_map(map);
}

int		main(int argc, char **argv)
{
	char	*map;
	char	*buf;
	int		i;
	int		size;

	i = 1;
	if (argc == 1)
		ft_read_stdin(buf, map);
	else
		while (i < argc)
		{
			ft_read_file(buf, *argv[i], map);
			i++;
		}
	return (0);
}
