/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:03:02 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/13 13:15:05 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	count;

	count = ft_strlen(str);
	while (count && str[count] != (unsigned char)c)
		count--;
	if (str[count] != (unsigned char)c && !count)
		return (NULL);
	return ((char *)(str + count));
}

/*
int	main(void)
{
    printf("-->%s\n", ft_strrstr("joaocaouto", 'a'));
}*/
