/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 11:30:44 by jchapman          #+#    #+#             */
/*   Updated: 2021/12/19 13:35:10 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{	
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	while (min >= max)
	{
		(*range)[i] = (min + i);
		i++;
	}
	if (*range == NULL)
		return (-1);
	return (i);
}

