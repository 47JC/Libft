/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:39:23 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/20 14:39:24 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	temp = lst;
	while (temp != NULL)
	{
		(*f)(temp->content);
		temp = temp->next;
	}
}

// int main ()
// {
//     t_list *new = ft_lstnew("jo");
//     ft_lstadd_back(&new, ft_lstnew("jo"));
//     ft_lstadd_back(&new, ft_lstnew("jo"));
//     ft_lstadd_back(&new, ft_lstnew("jo"));

//     t_list *temp;

//     temp = new;
//     printf("%s\n", (char *)temp->content);
//     temp = temp->next;
//     printf("%s\n", (char *)temp->content);
//     temp = temp->next;
//     printf("%s\n", (char *)temp->content);
//     temp = temp->next;
//     printf("%s\n", (char *)temp->content);

//     ft_lstiter(new, funcao);
// }
