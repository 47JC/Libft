/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:04:57 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/20 15:04:58 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*nova;
	int		i;
	int		n;

	n = 0;
	i = ft_strlen(s1);
	nova = (char *)malloc(sizeof(char) * (i + 1));
	if (!nova)
		return (0);
	while (s1[n])
	{
		nova[n] = s1[n];
		n++;
	}
	nova[n] = '\0';
	return (nova);
}
/*
int	main(void)
{
	char nome[] = "lorem ipsum dolor sit amet";
	char *p = ft_strdup(nome);

	write(1, p, 26);
	
}*/
