/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:38:39 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/13 12:52:11 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		i = (n % 10) + 48;
		ft_putnbr_fd(n / 10, fd);
		write(fd, &i, 1);
	}
	if (n <= 9)
	{
		n += 48;
		write(fd, &n, 1);
		return ;
	}
}
/*
int	main(void)
{
	int	fd;

	fd = open("text.txt", O_WRONLY);
	ft_putnbr_fd(42, fd);
}*/
