/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
void test_strlcpy(const char *src, size_t size) {
	char dst_ft[100];
	char dst_libc[100];

	// Appeler ft_strlcpy
	size_t ft_result = ft_strlcpy(dst_ft, src, size);
	printf("Resultat de ft_strlcpy : %zu, Chaine : \"%s\"\n", ft_result, dst_ft);

	// Appeler la fonction strlcpy standard
	size_t libc_result = strlcpy(dst_libc, src, size);
	printf("Resultat de strlcpy (libc) : %zu, Chaine : \"%s\"\n", libc_result, dst_libc);
}

int main() {
	// Test 1 : Taille du buffer suffisante
	printf("Test 1 : Taille du buffer suffisante\n");
	test_strlcpy("Hello, world!", 20);

	// Test 2 : Taille du buffer juste suffisante
	printf("\nTest 2 : Taille du buffer juste suffisante\n");
	test_strlcpy("Hello, world!", 13);

	// Test 3 : Taille du buffer trop petite
	printf("\nTest 3 : Taille du buffer trop petite\n");
	test_strlcpy("Hello, world!", 5);

	// Test 4 : Taille du buffer nulle
	printf("\nTest 4 : Taille du buffer nulle\n");
	test_strlcpy("Hello, world!", 0);

	return 0;
}
*/