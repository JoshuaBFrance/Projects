/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrances <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:23:34 by jfrances          #+#    #+#             */
/*   Updated: 2019/11/04 14:05:28 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int ac, char **av)
{
	if (ac > 1)
		while (*av[1])
			write(1, av[1]++, 1);
	write(1, "\n", 1);
	return (0);
}
