/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:16:59 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/20 15:17:19 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c += 32;
	return (c);
}
/*
int	main(void)
{
    int i = 0;

    while (i <= 127)
    {
        printf("O caracter --> %c, na minha função --> %c, na original -->
		%c.\n", i, ft_tolower(i), tolower(i));
        i++;
    }
}*/
