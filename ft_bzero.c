/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:55:47 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/05 16:31:28 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *str;
	size_t	i;

	i = 0;
	str = s;
	while (i < n)
		*(str + i++) = 0;
}
/*
int main()
{
	char nome[4] = "joao";

	printf("antes-->%s\n", nome);
	ft_bzero(nome, 4);
	printf("depois-->%s.\n", nome);
}*/
