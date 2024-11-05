/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new) {
    if (*alst == NULL) {
        *alst = new;

    }
    else
    {
        t_list *last = *alst;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new;
    }
}
/*
int main(void) {
    // Initialisation d'une liste vide
    t_list *head = NULL;

    // Création de nouveaux nœuds avec contenu
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    // Ajout des nœuds à la liste
    ft_lstadd_back(&head, node1);  // Liste: Node 1
    ft_lstadd_back(&head, node2);  // Liste: Node 1 -> Node 2
    ft_lstadd_back(&head, node3);  // Liste: Node 1 -> Node 2 -> Node 3

    // Affichage des éléments de la liste
    t_list *current = head;
    while (current != NULL) {
        printf("Content: %s\n", (char *)current->content);
        current = current->next;
    }
    return 0;
}
*/