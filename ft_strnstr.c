/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char  *ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*hay;

	i = 0;
	hay = (char *)big;
	n_len = ft_strlen(little);
	if (n_len == 0 || big == little)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		c = 0;
		while (hay[i + c] != '\0' && little[c] != '\0'
				&& hay[i + c] == little[c] && i + c < len)
			c++;
		if (c == n_len)
			return (hay + i);
		i++;
	}
	return (0);
}
/*
void test_strnstr(const char *big, const char *little, size_t len) {
    // Tester avec ft_strnstr
    char *ft_result = ft_strnstr(big, little, len);
    if (ft_result) {
        printf("Resultat de ft_strnstr pour \"%s\" et \"%s\" avec len = %zu : \"%s\"\n", big, little, len, ft_result);
    } else {
        printf("Resultat de ft_strnstr pour \"%s\" et \"%s\" avec len = %zu : NULL\n", big, little, len);
    }

    // Tester avec la fonction standard strnstr
    char *libc_result = strnstr(big, little, len);
    if (libc_result) {
        printf("Resultat de strnstr (libc) pour \"%s\" et \"%s\" avec len = %zu : \"%s\"\n", big, little, len, libc_result);
    } else {
        printf("Resultat de strnstr (libc) pour \"%s\" et \"%s\" avec len = %zu : NULL\n", big, little, len);
    }
}

int main() {
    // Test 1 : little est une sous-chaîne de big et len est suffisant
    printf("Test 1 : little est une sous-chaine de big et len est suffisant\n");
    test_strnstr("hello world", "world", 11);

    // Test 2 : little est une sous-chaîne mais len est plus court que big
    printf("\nTest 2 : little est une sous-chaine mais len est plus court que big\n");
    test_strnstr("hello world", "world", 5);

    // Test 3 : little n'est pas dans big
    printf("\nTest 3 : little n'est pas dans big\n");
    test_strnstr("hello world", "notfound", 11);

    // Test 4 : little est une chaîne vide
    printf("\nTest 4 : little est une chaine vide\n");
    test_strnstr("hello world", "", 11);

    // Test 5 : big est une chaîne vide
    printf("\nTest 5 : big est une chaine vide\n");
    test_strnstr("", "world", 0);

    return 0;
}
*/