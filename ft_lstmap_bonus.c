/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Apply function f to each element's content and create a new list
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
    t_list *new_list = NULL;
    t_list *new_elem = NULL;
    t_list *prev_elem = NULL;

    if (lst == NULL || f == NULL) {
        return NULL;
    }

    while (lst != NULL) {
        // Apply function f to the content of the current node
        void *new_content = f(lst->content);
        if (new_content == NULL) {
            // Cleanup and return NULL if memory allocation fails
            ft_lstclear(&new_list, del);
            return NULL;
        }

        // Create a new element with the transformed content
        new_elem = ft_lstnew(new_content);
        if (new_elem == NULL) {
            // Cleanup and return NULL if memory allocation fails
            ft_lstclear(&new_list, del);
            return NULL;
        }

        // Add the new element to the end of the new list
        if (prev_elem == NULL) {
            new_list = new_elem;
        } else {
            prev_elem->next = new_elem;
        }
        prev_elem = new_elem;

        // Move to the next element in the original list
        lst = lst->next;
    }

    return new_list;
}
/*
// Function to transform content (e.g., convert to uppercase)
void *to_uppercase(void *content) {
    char *str = (char *)content;
    char *new_str = malloc(strlen(str) + 1);
    if (new_str == NULL) return NULL;

    for (int i = 0; str[i]; i++) {
        new_str[i] = toupper(str[i]);
    }
    new_str[strlen(str)] = '\0';
    return new_str;
}

// Function to delete content (cleanup)
void del(void *content) {
    free(content);
}

int main(void) {
    // Create nodes with content
    t_list *node1 = ft_lstnew(strdup("hello"));
    t_list *node2 = ft_lstnew(strdup("world"));
    t_list *node3 = ft_lstnew(strdup("libft"));

    if (node1 == NULL || node2 == NULL || node3 == NULL) {
        perror("Failed to allocate memory for nodes");
        return EXIT_FAILURE;
    }

    // Link the nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Apply ft_lstmap to create a new list with transformed content
    t_list *new_list = ft_lstmap(node1, to_uppercase, del);

    // Print the new list
    t_list *current = new_list;
    while (current != NULL) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Clean up
    ft_lstclear(&new_list, del);
    return 0;
}
*/