/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:49:47 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/20 14:49:48 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		n;

	n = 1;
	tmp = lst;
	if (!lst)
		return (0);
	while (tmp->next != NULL)
	{
		n++;
		tmp = tmp->next;
	}
	return (n);
}
/*
int	main(void)
{
    t_list *head = ft_lstnew("couto");
    t_list *new = ft_lstnew("joao");
    t_list **pp = &head;

    ft_lstadd_front(pp, new);
    pp = &head;
    ft_lstadd_front(pp, ft_lstnew("1"));
    pp = &head;
    ft_lstadd_front(pp, ft_lstnew("2"));
    pp = &head;
    ft_lstadd_front(pp, ft_lstnew("3"));
    printf("%d\n",ft_lstsize(head));
}*/
