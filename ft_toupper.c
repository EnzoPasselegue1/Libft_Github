/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        c -= 32;
    return (c);
}
/*
// Fonction pour tester et comparer ft_toupper et toupper
void test_toupper_comparison(int c) {
    int standard_result = toupper(c);
    int my_result = ft_toupper(c);

    printf("Caractere : '%c'\n", c);
    printf("  Standard toupper('%c') = '%c'\n", c, standard_result);
    printf("  ft_toupper('%c') = '%c'\n", c, my_result);
    printf("  %s\n", standard_result == my_result ? "Les resultats sont identiques." : "Les resultats sont differents.");
}

int main() {
    // Test avec différents caractères

    // Test 1 : Lettre minuscule
    printf("Test 1 : Lettre minuscule\n");
    test_toupper_comparison('a');  // Attendu : 'A'

    // Test 2 : Lettre majuscule
    printf("\nTest 2 : Lettre majuscule\n");
    test_toupper_comparison('B');  // Attendu : 'B'

    // Test 3 : Chiffre
    printf("\nTest 3 : Chiffre\n");
    test_toupper_comparison('5');  // Attendu : '5'

    // Test 4 : Caractère spécial
    printf("\nTest 4 : Caractere special\n");
    test_toupper_comparison('@');  // Attendu : '@'

    // Test 5 : Lettre minuscule accentuée (sur un système avec support Unicode, sinon le résultat peut varier)
    printf("\nTest 5 : Lettre minuscule accentuee\n");
    test_toupper_comparison('é');  // Attendu : 'É' (peut varier selon la locale)

    // Test 6 : Caractère non imprimable
    printf("\nTest 6 : Caractere non imprimable\n");
    test_toupper_comparison('\n');  // Attendu : '\n'

    // Test 7 : Valeur de caractère hors des limites typiques (pour voir comment votre fonction gère les extrêmes)
    printf("\nTest 7 : Valeurs extremes\n");
    test_toupper_comparison(CHAR_MIN);  // Valeur minimale possible
    test_toupper_comparison(CHAR_MAX);  // Valeur maximale possible

    return 0;
}
*/