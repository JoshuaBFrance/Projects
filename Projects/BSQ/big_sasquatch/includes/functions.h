/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:15:59 by wiwang            #+#    #+#             */
/*   Updated: 2019/11/12 19:33:45 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

void	ft_read_file(char *buf, char *argv[i], char *map);
void	ft_read_stdin(char *buff, char *map);
int		map_length(char *map_str);
int		map_lines(char *map_str);
void	print_map(char **map, char *map_str);
char	**map_create(char *map_line);
int		ft_strlen(char *str);
int		ft_atoi(const char *str);
char	ft_realloc(char *ptr, int size);
char	ft_strcpy(char *dest, char *src);

#endif
