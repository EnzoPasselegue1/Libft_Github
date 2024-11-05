/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *new_elem = (t_list *)malloc(sizeof(t_list));
    if (!new_elem)
        return (NULL);
    new_elem->content = content;
    new_elem->next = NULL;

    return (new_elem);
}
/*
// Function to print the content of the list node
void print_list_node(t_list *node) {
    if (!node) {
        printf("Node is NULL\n");
        return;
    }

    // Check if content is NULL or has a value
    if (node->content)
        printf("Node content: %s\n", (char *)node->content);
    else
        printf("Node content is NULL\n");

    // Check if next is NULL
    if (!node->next)
        printf("Node 'next' pointer is NULL (as expected)\n");
    else
        printf("Node 'next' pointer is NOT NULL (unexpected)\n");
}

int main() {
    // Test 1: Simple content (string)
    char *content1 = "Hello, World!";
    t_list *node1 = ft_lstnew(content1);
    printf("Test 1: Simple string content\n");
    print_list_node(node1);

    // Test 2: Content is NULL
    t_list *node2 = ft_lstnew(NULL);
    printf("\nTest 2: NULL content\n");
    print_list_node(node2);

    // Test 3: Complex content (integer converted to string)
    int value = 42;
    char *content3 = malloc(20); // Allocate memory to store the string
    if (!content3) {
        printf("Memory allocation failed\n");
        return 1;
    }
    snprintf(content3, 20, "%d", value); // Convert integer to string
    t_list *node3 = ft_lstnew(content3);
    printf("\nTest 3: Integer as string content\n");
    print_list_node(node3);

    // Test 4: Larger string content
    char *content4 = "This is a much longer string used to test the function.";
    t_list *node4 = ft_lstnew(content4);
    printf("\nTest 4: Larger string content\n");
    print_list_node(node4);

    // Free dynamically allocated memory
    free(content3);

    // Free allocated nodes (optional since the program will end here)
    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return 0;
}
*/