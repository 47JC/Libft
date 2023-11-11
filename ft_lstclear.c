/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:35:09 by joada-s2          #+#    #+#             */
/*   Updated: 2023/11/11 14:32:05 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*current;

	if (!lst && !del)
		return ;
	current = *lst;
	while (current)
	{
		temp = current;
		current = current->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}

// int main()
// {
//     t_list *head = NULL;

//     ft_lstadd_back(&head, ft_lstnew("1"));
//     ft_lstadd_back(&head, ft_lstnew("2"));
//     ft_lstadd_back(&head, ft_lstnew("3"));
//     ft_lstclear(&head, &del);
//     printf("%p\n", (char*)head->content);

// }
