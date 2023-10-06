/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 11:05:51 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/06 15:57:28 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"
int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

size_t   ft_strlcat(char *dest, char *src, size_t size)
{
    size_t	len;
    size_t	i;
    size_t	j;
    size_t	len_src;

    len_src = (size_t)ft_strlen(src);
    i = 0;
    len = (size_t)ft_strlen(dest);
    j = len;
    if (size == 0)
	    return (len_src);
    while (src[i] && ((i + len) < size - 1))
    	dest[j++] = src[i++];
    dest[j] = '\0';
    if (len >= size)
	    len = size;
    return ((size_t)len_src + len);
}
/*
int     main()
{
    char *nome;
    if (!(nome = (char *)malloc(sizeof(*nome) * 15)))
		return (0);
    memset(nome, 0, 15);
    memset(nome, 'r', 6);
    nome[10] = 'a';
    printf("-->%lu\n", ft_strlcat(nome, "lorem ipsum dolor sit amet", 0));
   write(1, nome, 15); 
}
*/
