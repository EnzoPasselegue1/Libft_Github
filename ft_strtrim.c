/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	end;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	beg = 0;
	while (s1[beg] && ft_strchr(set, s1[beg]))
		beg++;
	end = ft_strlen(s1 + beg);
	if (end)
		while (s1[end + beg - 1] != 0 && ft_strchr(set, s1[end + beg - 1]) != 0)
			end--;
	if (!(new = malloc(sizeof(char) * end + 1)))
		return (NULL);
	ft_strncpy(new, s1 + beg, end);
	new[end] = '\0';
	return (new);
}

/*
void test_strtrim(const char *s1, const char *set) {
    // Tester avec ft_strtrim
    char *ft_result = ft_strtrim(s1, set);
    if (ft_result) {
        printf(" Resultat de ft_strtrim pour \"%s\" avec set \"%s\" : \"%s\"\n", s1, set, ft_result);
        free(ft_result);
    } else {
        printf(" Resultat de ft_strtrim pour \"%s\" avec set \"%s\" : NULL\n", s1, set);
    }
}

int main() {
    // Test 1 : Caractères à enlever au début et à la fin
    printf("Test 1 : Caracteres a enlever au début et a la fin\n");
    test_strtrim("  hello world  ", " ");

    // Test 2 : Caractères à enlever seulement au début
    printf("\nTest 2 : Caracteres a enlever seulement au debut\n");
    test_strtrim("  hello world", " ");

    // Test 3 : Caractères à enlever seulement à la fin
    printf("\nTest 3 : Caracteres a enlever seulement a la fin\n");
    test_strtrim("hello world  ", " ");

    // Test 4 : Aucun caractère à enlever
    printf("\nTest 4 : Aucun caractere a enlever\n");
    test_strtrim("hello world", " ");

    // Test 5 : La chaîne est vide
    printf("\nTest 5 : La chaine est vide\n");
    test_strtrim("", " ");

    // Test 6 : Le set est vide
    printf("\nTest 6 : Le set est vide\n");
    test_strtrim("hello world", "");

    return 0;
}
*/