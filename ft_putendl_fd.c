/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:31:00 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/13 12:37:07 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}
/*
int main (int argc, char **argv)
{
        int     fd;

        if (argc == 2)
        {
                fd = open("text.txt", O_WRONLY);
                ft_putendl_fd(argv[1], fd);      
        }
}
*/
