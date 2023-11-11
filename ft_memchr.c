/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:41:51 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/13 10:48:32 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(str + i) == ((unsigned char)c))
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
/*
int main ()
{
 	char *name = "joao couto";
 	name = ft_memchr(name, 'x', 9);
 	printf("%s\n", name);

	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	printf("%s", (char *)ft_memchr(tab, -1, 7));
	
}*/
