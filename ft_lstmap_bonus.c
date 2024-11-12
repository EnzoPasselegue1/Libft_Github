/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:50:33 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/12 09:50:33 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_lst;

	new_lst = NULL;
	head = malloc(sizeof(t_list));
	if (!head || !lst)
		return (NULL);
	head->content = f(lst->content);
	new_lst = head;
	while (lst->next)
	{
		new_lst->next = malloc(sizeof(t_list));
		if (!new_lst->next)
			return (ft_lstclear(&head, del), NULL);
		new_lst = new_lst->next;
		lst = lst->next;
		new_lst->content = f(lst->content);
	}
	new_lst->next = NULL;
	return (head);
}
