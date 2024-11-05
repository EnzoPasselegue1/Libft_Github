/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *)) {
    t_list *temp;

    if (lst == NULL || del == NULL) {
        return;
    }

    while (*lst != NULL) {
        // Store the next node
        temp = (*lst)->next;
        // Delete the content of the current node
        del((*lst)->content);
        // Free the current node
        free(*lst);
        // Move to the next node
        *lst = temp;
    }
    // Set the head of the list to NULL
    *lst = NULL;
}
/*
// Function to free the content of a node
void del_content(void *content, size_t size) {
    // Cast content to string and print it for demonstration purposes
    printf("Deleting content: %s\n", (char *)content);
    // Optionally check the size, though it's not strictly necessary for this example
    printf("Size of content: %zu\n", size);
    free(content);  // Free the content itself
}

int main(void) {
    // Create nodes with content
    t_list *node1 = ft_lstnew(malloc(6));
    t_list *node2 = ft_lstnew(malloc(6));
    t_list *node3 = ft_lstnew(malloc(6));

    if (node1 == NULL || node2 == NULL || node3 == NULL) {
        perror("Failed to allocate memory for nodes");
        return EXIT_FAILURE;
    }

    // Initialize the content of the nodes
    snprintf((char *)node1->content, 6, "Node1");
    snprintf((char *)node2->content, 6, "Node2");
    snprintf((char *)node3->content, 6, "Node3");

    // Link the nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Print the list before clearing
    t_list *current = node1;
    printf("List before clearing:\n");
    while (current != NULL) {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }

    // Clear the list
    ft_lstclear(&node1, del_content);

    // Print the list after clearing
    printf("List after clearing:\n");
    if (node1 == NULL) {
        printf("The list is now empty.\n");
    } else {
        current = node1;
        while (current != NULL) {
            printf("Content: %s\n", (char *)current->content);
            current = current->next;
        }
    }
    return 0;
}
*/