/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:52:49 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/04 17:26:48 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*str;
	unsigned char	*str_src;

	str_src = ( unsigned char *)src;
	str = (unsigned char*)dest;
	i = 0; 
	while (i < n)
	{
		str[i] = str_src[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char name[10] = "joaocouto";
// 	char copia1[10];

// 	ft_memcpy(copia1, name, strlen(name) + 1); // para funcionar tem de ser o numero de carateres de src + 1; penso que seja para copiar o null point.. caso nao o copie devera criar comportamento indefinido;
// 	printf("%s\n", copia1);
// }
