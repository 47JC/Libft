/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:32:36 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/20 14:32:41 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*new;
	t_list	**pp;

    head = ft_lstnew("couto");
    new = ft_lstnew("joao");
    pp = &head;
    ft_lstadd_front(pp, new);
    pp = &head;
    ft_lstadd_front(pp, ft_lstnew("1"));
    pp = &head;
    ft_lstadd_front(pp, ft_lstnew("2"));
    pp = &head;
    ft_lstadd_front(pp, ft_lstnew("3"));
    printf("%s\n", (char *)head->content);
    head = head->next;
    printf("%s\n", (char *)head->content);
    head = head->next;
    printf("%s\n", (char *)head->content);
    head = head->next;
    printf("%s\n", (char *)head->content);
    head = head->next;
    printf("%s\n", (char *)head->content);
}
*/
