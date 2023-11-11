/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:53:09 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/16 12:54:44 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	lens;
	unsigned int	i;
	char			*str;

	i = 0;
	lens = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (lens + 1));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
    char *nome = "joaocouto";

    printf("|%s|\n",  ft_strmapi(nome, funcao));
}*/
