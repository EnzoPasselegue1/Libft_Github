/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/06 11:20:36 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/06 11:20:36 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	t_list	*prev_elem;
	void	*new_content;

	new_list = NULL;
	new_elem = NULL;
	prev_elem = NULL;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new_content = f(lst->content);
		if (new_content == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_elem = ft_lstnew(new_content);
		if (new_elem == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (prev_elem == NULL)
			new_list = new_elem;
		else
			prev_elem->next = new_elem;
		prev_elem = new_elem;
		lst = lst->next;
	}
	return (new_list);
}
