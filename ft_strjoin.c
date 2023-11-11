/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:32:29 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/13 11:32:49 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		len_s1;
	int		len_s2;
	int		i;
	int		n;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	n = 0;
	new = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!new)
		return (NULL);
	while (s1[i] && s1)
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[n] && s2)
		new[i++] = s2[n++];
	new[i] = '\0';
	return (new);
}
/*
int	main(int argc, char **argv)
{
    if (argc == 3)
    {
            printf("%s\n", ft_strjoin(argv[1], argv[2]));
    }
}*/
