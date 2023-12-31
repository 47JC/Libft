/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:09:22 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/20 15:09:31 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	i = 0;
	while (src && src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ((size_t)len);
}
/*
int	main(void)
{
	char *str = "joaocouto3333333";     
	char copia[10] = "";

	ft_strlcpy(copia, str, 0);
	printf("--->%lu, %s\n", ft_strlcpy(copia, str, 10), copia);
//	printf("--->%lu, %s\n", strlcpy(copia, str, 10), copia);
}*/
