/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstadd_front(t_list **alst, t_list *new)
{
    if (new != NULL) {
        new->next = *alst;  // Point the new element's next to the current first element
        *alst = new;        // Update the head of the list to point to the new element
    }
}
/*
void print_list(t_list *lst) {
    while (lst != NULL) {
        printf("Content: %s\n", (char *)lst->content);
        lst = lst->next;
    }
}

int main(void) {
    t_list *head = NULL;  // Initialize an empty list

    // Create a new node with content "42"
    t_list *node1 = ft_lstnew("42");
    ft_lstadd_front(&head, node1);  // Add node to the front

    // Create a new node with content "School"
    t_list *node2 = ft_lstnew("School");
    ft_lstadd_front(&head, node2);  // Add another node to the front

    t_list *node3 = ft_lstnew("voili");
    ft_lstadd_front(&head, node3);

    t_list *node4 = ft_lstnew("voilou");
    ft_lstadd_front(&head, node4);

    // Print the list to see the elements
    printf("List after adding nodes:\n");
    print_list(head);

    return 0;
}
*/