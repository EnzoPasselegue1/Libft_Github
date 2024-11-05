/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
void test_strncmp(const char *s1, const char *s2, size_t n) {
	// Tester avec ft_strncmp
	int ft_result = ft_strncmp(s1, s2, n);
	printf("Resultat de ft_strncmp pour \"%s\" et \"%s\" avec n = %zu : %d\n", s1, s2, n, ft_result);

	// Tester avec la fonction standard strncmp
	int libc_result = strncmp(s1, s2, n);
	printf("Resultat de strncmp (libc) pour \"%s\" et \"%s\" avec n = %zu : %d\n", s1, s2, n, libc_result);
}

int main() {
	// Test 1 : Les chaînes sont égales
	printf("Test 1 : Les chaines sont egales\n");
	test_strncmp("hello", "hello", 5);

	// Test 2 : Les chaînes sont différentes (n plus petit que la longueur des chaînes)
	printf("\nTest 2 : Les chaines sont differentes\n");
	test_strncmp("hello", "hella", 5);

	// Test 3 : Les chaînes sont différentes (n plus grand que la longueur des chaînes)
	printf("\nTest 3 : Les chaines sont differentes, n plus grand\n");
	test_strncmp("hello", "hell", 6);

	// Test 4 : Chaînes avec des caractères spéciaux
	printf("\nTest 4 : Chaines avec des caracteres spéciaux\n");
	test_strncmp("hell@", "hell@", 5);

	// Test 5 : Comparer un préfixe commun
	printf("\nTest 5 : Comparer un prefixe commun\n");
	test_strncmp("hello", "helloworld", 4);

	return 0;
}
*/