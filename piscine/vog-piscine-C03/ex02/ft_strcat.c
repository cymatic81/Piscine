/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:55:25 by jchapman          #+#    #+#             */
/*   Updated: 2021/12/12 15:55:42 by jchapman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
	count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	destlen;
	int	srclen;

	destlen = 0;
	while (dest[destlen] != '\0')
		destlen++;
	srclen = 0;
	while (src[srclen] != '\0')
	{
		dest[srclen + destlen] = src[srclen];
		srclen++;
	}
	dest[srclen + destlen] = '\0';
	return (dest);
}
