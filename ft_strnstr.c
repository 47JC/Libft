/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:29:45 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/09 16:15:46 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string, const char *subs, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (subs[i] == 0)
		return ((char *)string);
	while (string[i] && string && i < n)
	{
		j = 0;
		if (string[i] == subs[j])
		{
			while (subs[j] && string[i + j] == subs[j] && i + j < n)
				j++;
			if (subs[j] == 0)
				return ((char *)string + i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
     char name[] = "lorem ipsum dolor sit amet";
     char sub[] = "lorem";
     char *str;
	
     str = ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
     printf("%s\n", str);
     
}*/
