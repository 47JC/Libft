/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:50:19 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/19 16:51:00 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
    char c = 0x1f;

    if (ft_isascii(0x1f))
        printf("O carater é %c.\n", c);
    else
        printf("o carater não pertence à ascii.");
}*/
