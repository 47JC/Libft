/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:40:45 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/20 14:40:47 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		n;
	t_list	*tmp;

	n = ft_lstsize(lst);
	if (n == 0)
	{
		return (lst);
	}
	tmp = lst;
	while (n != 1)
	{
		tmp = tmp->next;
		n--;
	}
	return (tmp);
}
/*
int	main(void)
{
    t_list *head = NULL;

    ft_lstadd_back(&head, ft_lstnew("1"));
    ft_lstadd_back(&head, ft_lstnew("2"));
    ft_lstadd_back(&head, ft_lstnew("3"));
    
    t_list *nova = ft_lstlast(head);

    printf("%s and %p\n", (char*)nova->content, (t_list*)nova->next);
}*/
