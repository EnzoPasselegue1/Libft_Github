/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*)) {
    if (lst == NULL || del == NULL) {
        return;
    }
    // Call the function to free the content of the node
    del(lst->content);
    // Free the node itself
    free(lst);
}
/*
// Function to free the content of a node
void del_content(void *content) {
    // Cast content to string and print it for demonstration purposes
    printf("Deleting content: %s\n", (char *)content);
    free(content);  // Free the content itself
}

int main(void) {
    // Create a new node with content
    t_list *node = ft_lstnew(malloc(6));
    if (node == NULL) {
        perror("Failed to allocate memory for node");
        return EXIT_FAILURE;
    }

    // Copy "Hello" into the newly allocated space
    snprintf((char *)node->content, 6, "Hello");
    node->next = NULL;

    // Print the content before deletion
    printf("Node content before deletion: %s\n", (char *)node->content);

    // Delete the node using ft_lstdelone
    ft_lstdelone(node, del_content);

    // Attempt to print the content again (shouldn't be possible, as node is deleted)
    // printf("Node content after deletion: %s\n", (char *)node->content);

    return 0;
}
*/