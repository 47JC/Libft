/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:37:07 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/20 14:37:09 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

// int main()
// {
//     t_list *head = NULL;

//     ft_lstadd_back(&head, ft_lstnew("1"));
//     ft_lstadd_back(&head, ft_lstnew("2"));
//     ft_lstadd_back(&head, ft_lstnew("3"));
//     t_list *teste = ft_lstnew("joao");
//     teste->next = head;
//     printf("%s and %p\n", (char*)teste->content, (t_list*)teste->next);
//     ft_lstdelone(teste, del);
//     printf("%s and %p\n", (char*)teste->content, (t_list*)teste->next);
// }
