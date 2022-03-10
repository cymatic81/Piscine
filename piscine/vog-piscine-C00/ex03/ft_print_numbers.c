/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 09:21:20 by jchapman          #+#    #+#             */
/*   Updated: 2021/11/30 10:25:30 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	asciinum;

	asciinum = 48;
	while (asciinum < 58)
	{
		write(1, &asciinum, 1);
		asciinum++;
	}
}
