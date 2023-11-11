/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:03:43 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/20 15:03:45 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;
	int	len;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	while (i < len)
	{
		if (str[i] == ((unsigned char)c))
			return ((char *)str + i);
		i++;
	}
	if ((unsigned char)c == 0)
		return ((char *)(str + len));
	return (NULL);
}
/*
 int main()
 {
     printf("-->%s", ft_strchr("joao\0couto", 'c'));
 }*/
