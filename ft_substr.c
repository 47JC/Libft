/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:21:21 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/13 11:19:58 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	n;
	char			*sub;
	char			*sub2;

	n = 0;
	if (start > ft_strlen(s))
	{
		sub = (char *)malloc(sizeof(char) * 1);
		if (!sub)
			return (0);
		sub[0] = 0;
		return (sub);
	}
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[start] && len--)
		sub[n++] = s[start++];
	sub[n] = '\0';
	sub2 = ft_strdup((const char *)sub);
	free(sub);
	return (sub2);
}
/*
int	main(void)
{
	char nome[] = "lorem ipsum dolor sit amet";
	char *p = ft_substr(nome, 7, 10);
	
	write(1, "\n", 1);
	write(1, p, 11);
	write(1, "\n", 1);

}*/
