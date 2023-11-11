/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:20:03 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/09 16:58:34 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str_dest;
	unsigned char	*str_src;
	int				i;

	i = 0;
	if (!dest && !src)
		return (0);
	str_dest = (unsigned char *)dest;
	str_src = (unsigned char *)src;
	if (str_dest > str_src)
	{
		while (n--)
			str_dest[n] = str_src[n];
	}
	else
	{
		while (n--)
		{
			str_dest[i] = str_src[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char nome[] = "lorem ipsum dolor sit amet";
	char *copia;
	
	copia = nome + 1;

	if (nome != ft_memmove(nome, copia, 8))
		write(1, "dest's adress was not returned\n", 31);
	write(1, copia, 22);
}*/
