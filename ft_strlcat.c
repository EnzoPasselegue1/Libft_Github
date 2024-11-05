/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int				len;
	unsigned int	len2;
	unsigned int	i;
	unsigned int	n;

	n = 0;
	len2 = 0;
	len = 0;
	while (dest[len2])
		len2++;
	while (src[len])
		len++;
	if (len2 >= size)
		return (len + size);
	i = len2;
	while (src[n] && i < size - 1)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (len2 + len);
}
/*
void test_strlcat(const char *dst_init, const char *src, size_t size) {
	char dst_ft[100];
	char dst_libc[100];

	// Initialiser les deux buffers avec la même chaîne de destination
	strcpy(dst_ft, dst_init);
	strcpy(dst_libc, dst_init);

	// Appeler ft_strlcat
	size_t ft_result = ft_strlcat(dst_ft, src, size);
	printf("Resultat de ft_strlcat : %zu, Chaine : \"%s\"\n", ft_result, dst_ft);

	// Appeler la fonction strlcat standard
	size_t libc_result = strlcat(dst_libc, src, size);
	printf("Resultat de strlcat (libc) : %zu, Chaine : \"%s\"\n", libc_result, dst_libc);
}

int main() {
	// Test 1 : Buffer assez grand pour contenir les deux chaînes
	printf("Test 1 : Buffer assez grand\n");
	test_strlcat("Hello, ", "world!", 100);

	// Test 2 : Taille du buffer trop petite
	printf("\nTest 2 : Taille du buffer trop petite\n");
	test_strlcat("Hello, ", "world!", 10);

	// Test 3 : Taille du buffer égale à la taille de la chaîne de destination
	printf("\nTest 3 : Taille du buffer egale à la taille de la chaine de destination\n");
	test_strlcat("Hello, ", "world!", 7);

	// Test 4 : Taille du buffer plus petite que la chaîne de destination
	printf("\nTest 4 : Taille du buffer plus petite que la chaine de destination\n");
	test_strlcat("Hello, ", "world!", 5);

	return 0;
}
*/