/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:35:44 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/19 17:29:52 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*zero(char *new)
{
	new = (char *)malloc(sizeof(char) * 2);
	if (!new)
		return (NULL);
	new[0] = 48;
	new[1] = '\0';
	return (new);
}

static int	ft_is_negative(int n)
{
	if (n < 0)
	{
		return (1);
	}
	else
		return (0);
}

static int	count_n(int n, int count)
{
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		count;
	long	number;

	new = NULL;
	number = n;
	count = 0;
	if (n == 0)
		return (zero(new));
	if (ft_is_negative(n))
		count++;
	if (ft_is_negative(n))
		number *= -1;
	count = count_n(n, count);
	new = ft_calloc(count + 1, sizeof(char));
	if (!new)
		return (NULL);
	while (number > 0)
	{
		new[--count] = (number % 10) + 48;
		number /= 10;
	}
	if (new[0] == 0)
		new[--count] = '-';
	return (new);
}

// int	main(void)
// {
// 	char	*num;

// 	num = ft_itoa(-12345);
// 	write(1, num, 6);
// }
