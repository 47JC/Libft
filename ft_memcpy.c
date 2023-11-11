/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:52:49 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/20 14:55:12 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str_src;

	if (!dest && !src)
		return (NULL);
	str_src = (unsigned char *)src;
	str = (unsigned char *)dest;
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
// 	printf("%s\n", copia1);
// }
