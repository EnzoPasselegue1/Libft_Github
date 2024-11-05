/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list  *ft_lstlast(t_list *lst) {
    if (lst == NULL) return NULL;
    while (lst->next != NULL)
        lst = lst->next;
    return lst;
}
/*
int main(void) {
    // Initialisation d'une liste vide
    t_list *head = NULL;

    // Ajout de plusieurs éléments à la liste
    t_list *node1 = ft_lstnew("Element 1");
    ft_lstadd_front(&head, node1);

    t_list *node2 = ft_lstnew("Element 2");
    ft_lstadd_front(&head, node2);

    t_list *node3 = ft_lstnew("Element 3");
    ft_lstadd_front(&head, node3);

    // Test de ft_lstlast pour récupérer le dernier élément
    t_list *last_node = ft_lstlast(head);

    // Affichage du contenu du dernier élément
    if (last_node != NULL)
        printf("Last element content: %s\n", (char *)last_node->content);
    else
        printf("List is empty.\n");

    return 0;
}
*/