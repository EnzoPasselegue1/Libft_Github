/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;

    i = 0;
    while (s[i])
    {
        (*f)(i, s + i);
        i++;
    }
}
/*
// Fonction pour transformer chaque caractère en majuscule
void to_uppercase(unsigned int i, char *c) {
    (void)i;  // On ignore l'index ici
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - 32;
    }
}

// Fonction pour ajouter l'index au code ASCII du caractère
void add_index_to_char(unsigned int i, char *c) {
    *c = *c + i;
}

void    test_striteri(char *str, void (*f)(unsigned int, char*), const char *desc) {
    printf("\nAvant modification : %s\n", str);
    ft_striteri(str, f);
    printf("Apres %s : %s\n", desc, str);
}

int main(void) {
    //Test1 : Transformer en majuscule
    char str1[] = "Hello World";
    printf("Test 1 : Transformation en majuscules");
    test_striteri(str1, to_uppercase, "transformation en majuscules");

    printf("\n");
    //Test2 : Ajoute l'index au caractere
    char str2[] = "abcde";
    printf("Test 2 : ajout de l'index au caractere");
    test_striteri(str2, add_index_to_char, "ajout de l'index au caractere");

    return (0);
}
*/