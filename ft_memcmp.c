/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:27:48 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/13 10:58:11 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while (*(str1 + i) == *(str2 + i) && i < n - 1)
		i++;
	return (*(str1 + i) - *(str2 + i));
}

// int main()
// {
// 	char name[10] = "joaocouto";
// 	char apelido[10] = "joaoca";

// 	if (ft_memcmp(name, apelido, 7) == 0)
// 		printf("Sao iguais.\n");
// 	else if (ft_memcmp(name, apelido, 7) != 0)
// 		printf("A diferenca entre os char e %d\n", ft_memcmp(name, apelido, 7));
// }
