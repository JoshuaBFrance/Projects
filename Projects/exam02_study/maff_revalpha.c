/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrances <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:29:12 by jfrances          #+#    #+#             */
/*   Updated: 2019/11/04 14:49:40 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(void)
{
	int i;

	i = 123;
	while (i -- > 97)
		(i % 2 == 0) ? ft_putchar(i) : ft_putchar(i - 32);
	ft_putchar('\n');
	return (0);
}
