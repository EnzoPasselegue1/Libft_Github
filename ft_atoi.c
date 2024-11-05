/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_atoi(const char *str)
{
    int	i;
	int	count;
	int	final;

	i = 0;
	count = 1;
	final = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		final = final * 10;
		final = (final + (str[i] - 48));
		i++;
	}
	return (final * count);
}
/*
// Fonction pour tester et comparer ft_atoi et atoi
void test_atoi_comparison(const char *str) {
	int standard_result = atoi(str);
	int my_result = ft_atoi(str);

	printf("Chaine : \"%s\"\n", str);
	printf("  Standard atoi(\"%s\") = %d\n", str, standard_result);
	printf("  ft_atoi(\"%s\") = %d\n", str, my_result);
	printf("  %s\n", standard_result == my_result ? "Les resultats sont identiques." : "Les resultats sont differents.");
}

int main() {
	// Test avec différentes chaînes de caractères

	// Test 1 : Nombre simple positif
	printf("Test 1 : Nombre simple positif\n");
	test_atoi_comparison("42");  // Attendu : 42

	// Test 2 : Nombre négatif
	printf("\nTest 2 : Nombre negatif\n");
	test_atoi_comparison("-42");  // Attendu : -42

	// Test 3 : Nombre avec espaces avant
	printf("\nTest 3 : Nombre avec espaces avant\n");
	test_atoi_comparison("   123");  // Attendu : 123

	// Test 4 : Nombre avec caractères non numériques après
	printf("\nTest 4 : Nombre avec caracteres non numeriques apres\n");
	test_atoi_comparison("56abc");  // Attendu : 56

	// Test 5 : Nombre avec signes multiples
	printf("\nTest 5 : Nombre avec signes multiples\n");
	test_atoi_comparison("+-78");  // Attendu : 0 (chaîne non valide)

	// Test 6 : Nombre très grand
	printf("\nTest 6 : Nombre tres grand\n");
	test_atoi_comparison("2147483647");  // Attendu : 2147483647 (INT_MAX)

	// Test 7 : Nombre très petit
	printf("\nTest 7 : Nombre tres petit\n");
	test_atoi_comparison("-214748364454556");  // Attendu : -2147483648 (INT_MIN)

	// Test 8 : Chaîne vide
	printf("\nTest 8 : Chaine vide\n");
	test_atoi_comparison("");  // Attendu : 0

	// Test 9 : Chaîne avec seulement des espaces
	printf("\nTest 9 : Chaine avec seulement des espaces\n");
	test_atoi_comparison("    ");  // Attendu : 0

	return 0;
}
*/