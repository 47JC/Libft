/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:55:47 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/19 16:40:49 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = s;
	while (i < n)
		*(str + i++) = 0;
}
/*
int	main(void)
{
	char nome[4] = "joao";

	printf("antes-->%s\n", nome);
	ft_bzero(nome, 4);
	printf("depois-->%s.\n", nome);
}*/
