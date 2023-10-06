/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:20:03 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/06 14:34:34 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char *str_dest;
	char *temp;
	size_t	i;
	
	i = 0;
	str_dest = dest;
	temp = (char *)src;
	while (temp[n])
	{
		str_dest[i] = temp[i];
		i++;
	}
	return (dest);	
}
/*
int	main()
{
	char nome[10] = "joaocouto";
	char copia[10];

	memset(copia, '0', 10);
	ft_memmove(nome
}*/
