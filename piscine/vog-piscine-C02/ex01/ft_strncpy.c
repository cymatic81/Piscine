/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:02:20 by jchapman          #+#    #+#             */
/*   Updated: 2021/12/09 12:42:50 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	indexcount;

	indexcount = 0;
	while (indexcount < n && src[indexcount] != '\0')
	{
		dest[indexcount] = src[indexcount];
		indexcount++;
	}
	while (indexcount < n)
	{
		dest[indexcount] = '\0';
		indexcount++;
	}
	return (dest);
}
