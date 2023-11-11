/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:17:21 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/13 14:35:01 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	n;
	size_t	valor;

	valor = 0;
	i = 0;
	while (s1[i])
	{
		n = -1;
		valor = 0;
		while (set[++n])
		{
			if (s1[i] == set[n])
			{
				valor = 1;
			}
		}
		if (!valor)
			return (i);
		else
			i++;
	}
	return (i);
}

static size_t	ft_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	x;
	size_t	n;
	size_t	valor;

	valor = 0;
	i = 0;
	x = ft_strlen(s1);
	while (--x > 0)
	{
		n = -1;
		valor = 0;
		while (set[++n])
		{
			if (s1[x] == set[n])
			{
				valor = 1;
			}
		}
		if (valor == 0)
			return (x + 1);
		else
			i++;
	}
	return (x);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*new;

	i = 0;
	start = ft_start(s1, set);
	if (start >= ft_strlen(s1))
	{
		new = (char *)malloc(sizeof(char) * 1);
		if (!new)
			return (NULL);
		new[0] = 0;
		return (new);
	}
	end = ft_end(s1, set);
	new = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!new)
		return (NULL);
	while (start < end)
		new[i++] = s1[start++];
	new[i] = '\0';
	return (new);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("|%s|", ft_strtrim(argv[1], argv[2]));
	}
}*/
