/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    const char *base;

    base = s;
    i = ft_strlen(s);
    s = (s + i);
    while (*s != *base && (char)c != *s)
        s--;
    if ((char)c == *s)
        return ((char *)s);
    return (0);
}
/*
void test_strrchr(const char *s, int c) {
    // Tester avec ft_strrchr
    char *ft_result = ft_strrchr(s, c);
    if (ft_result) {
        printf("Resultat de ft_strrchr pour \"%s\" et '%c' : \"%s\"\n", s, c, ft_result);
    } else {
        printf("Resultat de ft_strrchr pour \"%s\" et '%c' : NULL\n", s, c);
    }

    // Tester avec la fonction standard strrchr
    char *libc_result = strrchr(s, c);
    if (libc_result) {
        printf("Resultat de strrchr (libc) pour \"%s\" et '%c' : \"%s\"\n", s, c, libc_result);
    } else {
        printf("Resultat de strrchr (libc) pour \"%s\" et '%c' : NULL\n", s, c);
    }
}

int main() {
    // Test 1 : Le caractère est dans la chaîne
    printf("Test 1 : Le caractere est dans la chaine\n");
    test_strrchr("hello world", 'o');

    // Test 2 : Le caractère est à la fin de la chaîne
    printf("\nTest 2 : Le caractere est a la fin de la chaine\n");
    test_strrchr("hello world", 'd');

    // Test 3 : Le caractère n'est pas dans la chaîne
    printf("\nTest 3 : Le caractere n'est pas dans la chaine\n");
    test_strrchr("hello world", 'x');

    // Test 4 : Le caractère est le caractère nul '\0'
    printf("\nTest 4 : Le caractere est le caractere nul '\\0'\n");
    test_strrchr("hello world", '\0');

    // Test 5 : La chaîne est vide
    printf("\nTest 5 : La chaine est vide\n");
    test_strrchr("", 'o');

    return 0;
}
*/