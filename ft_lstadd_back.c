/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:30:54 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/20 14:30:57 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;
	int		n;

	tmp = *lst;
	n = ft_lstsize(tmp);
	if (n == 0 && new)
	{
		*lst = new;
		return ;
	}
	while (n != 1 && lst)
	{
		tmp = tmp->next;
		n--;
	}
	if (new)
	{
		tmp->next = new;
	}
}

/*
int	main(void)
{
    t_list *head = NULL;

    ft_lstadd_back(&head, ft_lstnew("1"));
    ft_lstadd_back(&head, ft_lstnew("2"));
    ft_lstadd_back(&head, ft_lstnew("3"));
    printf("%s\n", (char *)head->content);
    head = head->next;
    printf("%s\n", (char *)head->content);
    head = head->next;
    printf("%s\n", (char *)head->content);
    free(head);
}*/
