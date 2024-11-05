/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        c += 32;
    return (c);
}
/*
// Fonction pour tester et comparer ft_tolower et tolower
void test_tolower_comparison(int c) {
    int standard_result = tolower(c);
    int my_result = ft_tolower(c);

    printf("Caractere : '%c'\n", c);
    printf("  Standard tolower('%c') = '%c'\n", c, standard_result);
    printf("  ft_tolower('%c') = '%c'\n", c, my_result);
    printf("  %s\n", standard_result == my_result ? "Les resultats sont identiques." : "Les resultats sont differents.");
}

int main() {
    // Test avec différents caractères

    // Test 1 : Lettre majuscule
    printf("Test 1 : Lettre majuscule\n");
    test_tolower_comparison('A');  // Attendu : 'a'

    // Test 2 : Lettre minuscule
    printf("\nTest 2 : Lettre minuscule\n");
    test_tolower_comparison('b');  // Attendu : 'b'

    // Test 3 : Chiffre
    printf("\nTest 3 : Chiffre\n");
    test_tolower_comparison('5');  // Attendu : '5'

    // Test 4 : Caractère spécial
    printf("\nTest 4 : Caractere special\n");
    test_tolower_comparison('$');  // Attendu : '$'

    // Test 5 : Lettre majuscule accentuée (sur un système avec support Unicode, sinon résultat peut varier)
    printf("\nTest 5 : Lettre majuscule accentuee\n");
    test_tolower_comparison('É');  // Attendu : 'é' (peut varier en fonction de la localisation et de la configuration locale)

    // Test 6 : Caractère non imprimable
    printf("\nTest 6 : Caractère non imprimable\n");
    test_tolower_comparison('\n');  // Attendu : '\n'

    return 0;
}
 */