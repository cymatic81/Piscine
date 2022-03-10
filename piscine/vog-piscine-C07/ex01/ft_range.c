/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 15:59:50 by jchapman          #+#    #+#             */
/*   Updated: 2021/12/19 11:21:48 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*out;
	int	i;

	if ((max - min) <= 0)
		return (NULL);
	out = (int *)malloc((max - min) * sizeof(int *));
	i = 0;
	while (i < (max - min))
	{
		out[i] = (min + i);
		i++;
	}
	return (out);
}
