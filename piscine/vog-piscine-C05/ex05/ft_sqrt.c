/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 13:03:29 by jchapman          #+#    #+#             */
/*   Updated: 2021/12/15 14:18:45 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	checksqr;

	checksqr = 1;
	if (nb < 1)
		return (0);
	while (((checksqr * checksqr) < nb) && (checksqr < 46341))
		checksqr++;
	if ((checksqr * checksqr) == nb)
		return (checksqr);
	return (0);
}
