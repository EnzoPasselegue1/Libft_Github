/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    unsigned int    len;
    char            *tab;

    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    tab = malloc(sizeof(char) * len + 1);
    if (!tab)
        return (NULL);
    i = 0;
    while (s[i])
    {
        tab[i] = f(i, s[i]);
        i++;
    }
    tab[i] = '\0';
    return (tab);
}
/*
// Fonction à appliquer sur chaque caractère Convertir en majuscule si l'index est pair
char to_upper_if_even(unsigned int i, char c) {
    if (i % 2 == 0 && c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

void test_strmapi(const char *s) {
    // Appeler ft_strmapi avec la fonction to_upper_if_even
    char *result = ft_strmapi(s, to_upper_if_even);

    if (result) {
        printf("Chaine d'origine : \"%s\"\n", s);
        printf("Chaine transformee : \"%s\"\n", result);
        free(result);
    } else {
        printf("Erreur d'allocation de memoire.\n");
    }
}

int main() {
    // Test 1 : Chaîne normale
    printf("Test 1 : Chaine normale\n");
    test_strmapi("hello world");

    // Test 2 : Chaîne avec des espaces
    printf("\nTest 2 : Chaine avec des espaces\n");
    test_strmapi("  lorem ipsum  ");

    // Test 3 : Chaîne vide
    printf("\nTest 3 : Chaine vide\n");
    test_strmapi("");

    // Test 4 : Chaîne avec des caractères spéciaux
    printf("\nTest 4 : Chaine avec des caracteres speciaux\n");
    test_strmapi("h3llo! @2024");

    return 0;
}
*/