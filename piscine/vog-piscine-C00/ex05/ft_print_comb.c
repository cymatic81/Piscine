/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:31:33 by jchapman          #+#    #+#             */
/*   Updated: 2021/11/30 21:02:21 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);
void	ft_display(void);

char	g_i;
char	g_j;
char	g_k;

void	ft_print_comb(void)
{
	g_i = '0';
	while (g_i < '8')
	{
		g_j = g_i + 1;
		while (g_j < '9')
		{
			g_k = g_j + 1;
			while (g_k < 58)
			{
				ft_display();
			}
			g_j++;
		}
		g_i++;
	}
}

void	ft_display(void)
{
	ft_putchar(g_i);
	ft_putchar(g_j);
	ft_putchar(g_k);
	g_k++;
	if (g_i < '7')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar(char x)
{
	write(1, &x, 1);
}
