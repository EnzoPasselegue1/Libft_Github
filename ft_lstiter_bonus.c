/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *)) {
    if (lst == NULL || f == NULL) {
        return;
    }

    while (lst != NULL) {
        f(lst->content);
        lst = lst->next;
    }
}
/*
// Function to print the content of a node
void print_content(void *content) {
    printf("Content: %s\n", (char *)content);
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

    // Print the list before applying ft_lstiter
    printf("List before ft_lstiter:\n");
    ft_lstiter(node1, print_content);

    // Clean up
    free(node1->content);
    free(node2->content);
    free(node3->content);
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/