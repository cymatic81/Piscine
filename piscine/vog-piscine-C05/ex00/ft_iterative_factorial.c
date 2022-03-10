/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 13:47:17 by jchapman          #+#    #+#             */
/*   Updated: 2021/12/15 15:41:46 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	out;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	out = nb;
	while (nb > 1)
	{
		i = nb - 1;
		out = i * out;
		nb--;
	}
	return (out);
}
