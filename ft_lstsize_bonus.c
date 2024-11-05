/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int     ft_lstsize(t_list *lst) {

    int count;
    count = 0;
    while (lst != NULL)
    {
        count++;
        lst = lst->next;
    }
    return count;
}
/*
int main(void) {
    t_list *head = NULL;  // Initialize an empty list

    // Create a new node with content "42"
    t_list *node1 = ft_lstnew("42");
    ft_lstadd_front(&head, node1);  // Add node to the front

    // Create a new node with content "School"
    t_list *node2 = ft_lstnew("School");
    ft_lstadd_front(&head, node2);  // Add another node to the front

    // Create a new node with content "Hello"
    t_list *node3 = ft_lstnew("Hello");
    ft_lstadd_front(&head, node3);  // Add another node to the front

    // Print the size of the list
    printf("List size: %d\n", ft_lstsize(head));

    return 0;
}
*/