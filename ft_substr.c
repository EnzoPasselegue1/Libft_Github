/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		ptr = (char *)ft_calloc(1, 1);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (len > (ft_strlen(s) - (int)start))
		len = (ft_strlen(s) - (int)start);
	ptr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
void test_substr(const char *s, unsigned int start, size_t len)
{
    char *ft_result = ft_substr(s, start, len);
    if (ft_result) {
        printf("Resultat de ft_substr pour \"%s\" avec start %u et len %zu : \"%s\"\n", s, start, len, ft_result);
        free(ft_result);
    } else {
        printf("Resultat de ft_substr pour \"%s\" avec start %u et len %zu : NULL\n", s, start, len);
    }
}

int main() {
    // Test 1 : Extraction d'une sous-chaîne complète
    printf("Test 1 : Extraction d'une sous-chaine complete\n");
    test_substr("hello world", 6, 5);  // Attendu : "world"

    // Test 2 : Extraction à partir d'un index qui dépasse la chaine
    printf("\nTest 2 : Extraction a partir d'un index qui depasse la chaine\n");
    test_substr("hello world", 20, 5);  // Attendu : ""

    // Test 3 : Extraction avec une longueur supérieure à la chaîne restante
    printf("\nTest 3 : Extraction avec une longueur superieure a la chaine restante\n");
    test_substr("hello world", 6, 20);  // Attendu : "world"

    // Test 4 : Extraction avec une longueur de 0
    printf("\nTest 4 : Extraction avec une longueur de 0\n");
    test_substr("hello world", 6, 0);  // Attendu : ""

    // Test 5 : Extraction d'une chaîne vide
    printf("\nTest 5 : Extraction d'une chaine vide\n");
    test_substr("", 0, 5);  // Attendu : ""

    // Test 6 : Extraction avec un index 0 et longueur maximale
    printf("\nTest 6 : Extraction avec un index 0 et longueur maximale\n");
    test_substr("hello world", 0, 20);  // Attendu : "hello world"

    return 0;
}
*/