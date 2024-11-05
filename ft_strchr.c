/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    if (s == NULL)
        return (NULL);
    while(*s)
    {
        if ((char)c == *s)
            return ((char *)s);
        s++;
    }
    if ((char)c == *s)
        return ((char *)s);
    return (NULL);
}
/*
void test_strchr(char *str, int ch) {
    //Utilisation de ft_strchr
    printf("Test avec ft_strchr :\n");
    char *result_ft = ft_strchr(str, ch);
    if (result_ft != NULL)
        printf("Caractere '%c' trouve avec ft_strchr a la position : %lld\n", ch, result_ft -str);
    else
        printf("Caractere '%c' non trouve avec ft_strchr.\n", ch);

    //Utilisation de strchr
    printf("Test avec strchr :\n");
    char *result_std = strchr(str, ch);
    if (result_std != NULL)
        printf("Caractere '%c' trouve avec ft_strchr a la position : %lld\n", ch, result_std - str);
    else
        printf("Caractere '%c' non trouve avec strchr.\n", ch);
}

int main(void)
{
    //Test 1 : Recheche du caractere 'o' dans la chaine "Hello world"
    printf("Test 1 : Recherche du caractere 'o' dans la chaine \"Hello world\"\n");
    test_strchr("Hello world", 'o');

    printf("\n");
    //Test 2 : Recheche du caractere 'z' dans la chaine "Hello world"
    printf("Test 2 : Recherche du caractere 'z' dans la chaine \"Hello world\"\n");
    test_strchr("Hello world", 'z');

    printf("\n");
    //Test 3 : Recheche du caractere '\0' dans la chaine "Hello world"
    printf("Test 3 : Recherche du caractere '\\0' dans la chaine \"Hello world\"\n");
    test_strchr("Hello world", '\0');

    printf("\n");
    //Test 4 : Recheche du caractere 'H' dans la chaine "Hello world"
    printf("Test 4 : Recherche du caractere 'H' dans la chaine \"Hello world\"\n");
    test_strchr("Hello world", 'H');

    return (0);
}
*/