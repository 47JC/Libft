/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:29:45 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/06 16:44:24 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char *ft_strnstr(char *subs, char * string, int n)
{
    int i;
    int j;

    i = 0;
    if (!subs) 
        return (string);
    while (string[i] && string && i < n)
    {
        j = 0;
        if (string[i] == subs[j])
        {
            while (subs[j] && string[i + j] == subs[j] && i + j < n)
                j++;
            if (!subs[j])
                return (string + i);
        }
        i++;
    }
    return (0);
}

int main()
{
     char *str;

     str = ft_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
     printf("%s\n", str);
     
}
