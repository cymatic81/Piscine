/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 10:26:30 by jchapman          #+#    #+#             */
/*   Updated: 2021/12/08 13:06:32 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	strlen;

	strlen = 0;
	while (src[strlen] != '\0')
	{
		dest[strlen] = src[strlen];
		strlen++;
	}
	dest[strlen] = '\0';
	return (dest);
}
