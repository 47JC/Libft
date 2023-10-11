/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:41:51 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/06 14:51:47 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char *str;

	str = s;
	i = 0;
	while (i < n && n > 0)
	{
		if (*(str + i) == (unsigned char)c)
			return ((void*)(s + i));
		i++;
	}
	return (NULL);
}
/*
int main ()
{
	int i = 0;
 	char *name = " couto";
 	name = ft_memchr(name, ' ', 1);
 	printf("|%s|\n", name);

	int arr[] = {0, 1, 2, -2, 3, 44, 5, 1333};
	int *arr2;

	arr2 = ft_memchr(arr, -2, 8);

	printf("%d", arr2[0]);
}
*/