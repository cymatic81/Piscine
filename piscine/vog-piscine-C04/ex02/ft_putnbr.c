/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:51:49 by jchapman          #+#    #+#             */
/*   Updated: 2021/12/14 10:41:16 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	nbr;
	char		a;
	char		b;

	nbr = (long int) nb;
	if (nbr < 0)
	{
		nbr = (long int) nb;
		nbr = nbr * -1;
		write(1, "-", 1);
	}
	if (nbr >= 10)
	{
		a = (nbr % 10) + 48;
		nbr = nbr / 10;
		ft_putnbr(nbr);
		write(1, &a, 1);
	}
	else
	{
		b = nbr +48;
		write(1, &b, 1);
	}
}
