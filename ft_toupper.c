/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:17:53 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/20 15:18:00 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	int	i;

    i = 0;
    while (i <= 127)
    {
        printf("O caracter --> %c, na minha função --> %c, na original -->
		%c.\n", i, ft_toupper(i), toupper(i));
        i++;
    }
}
*/
