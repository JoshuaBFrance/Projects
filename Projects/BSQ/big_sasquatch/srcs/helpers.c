/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrances <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:01:56 by jfrances          #+#    #+#             */
/*   Updated: 2019/11/12 19:39:44 by jfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <functions.h>

char		ft_realloc(char *ptr, int size)
{
	char *placehold;
	
	placehold = (char *) malloc(sizeof(size);
	ft_strcpy(*placehold, *ptr);
	free(ptr);
	return (placehold);
}

int		ft_strlen(char *ptr)
{
	int len;

	len = 0;
	while (ptr[len])
	{
		len++;
	}
	return len;
}

char	ft_strcpy(char *dest, char *src)
{	int cnt;

	cnt = 0
	while (src[cnt])
	{
		dest[i] = src[i];
		cnt++;
	}
	dest[cnt] = '\0';
	return (dest);
}

