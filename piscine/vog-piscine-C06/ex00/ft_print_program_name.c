/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:27:50 by jchapman          #+#    #+#             */
/*   Updated: 2021/12/16 13:44:25 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = argc - argc;
	while (*argv[i])
	{
		write(1, argv[i]++, 1);
	}
	write (1, "\n", 1);
	return (0);
}
