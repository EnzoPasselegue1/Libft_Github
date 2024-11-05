/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t len;
    len = 0;
    while(s[len])
    {
        len++;
    }
    return (len);
}
/*
void test_strlen(const char *s) {
    // Appeler ft_strlen
    size_t ft_result = ft_strlen(s);
    printf("Resultat de ft_strlen pour \"%s\" : %zu\n", s, ft_result);

    // Appeler la fonction strlen standard
    size_t libc_result = strlen(s);
    printf("Resultat de strlen (libc) pour \"%s\" : %zu\n", s, libc_result);
}

int main() {
    // Test 1 : Chaîne vide
    printf("Test 1 : Chaine vide\n");
    test_strlen("");

    // Test 2 : Chaîne normale
    printf("\nTest 2 : Chaine normale\n");
    test_strlen("Hello, world!");

    // Test 3 : Chaîne avec des espaces
    printf("\nTest 3 : Chaine avec des espaces\n");
    test_strlen("    ");

    // Test 4 : Chaîne avec des caractères spéciaux
    printf("\nTest 4 : Chaine avec des caracteres speciaux\n");
    test_strlen("Hello, \n\tworld!");

    // Test 5 : Longue chaîne
    printf("\nTest 5 : Longue chaine\n");
    test_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla accumsan.");

    return 0;
}
*/