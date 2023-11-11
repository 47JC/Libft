/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:17:10 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/19 16:35:16 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	menos;
	int	i;
	int	count;
	int	nb;

	nb = 0;
	i = 0;
	count = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			menos = -1;
		count++;
	}
	while (str[i] > 47 && str[i] < 58 && count <= 1)
	{
		nb *= 10;
		nb += str[i] - 48;
		i++;
	}
	if (menos == -1 && count <= 1)
		return (nb * menos);
	return (nb);
}
