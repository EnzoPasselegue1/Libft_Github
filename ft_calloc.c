/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_calloc(size_t count, size_t size) 
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
// Function to print memory contents in hexadecimal
void print_memory(const void *s, size_t n) {
    const unsigned char *p = s;
    for (size_t i = 0; i < n; ++i) {
        printf("%02x ", p[i]);
    }
    printf("\n");
}

// Function to test and compare ft_calloc and calloc
void test_calloc_comparison(size_t count, size_t size) {
    // Use standard calloc and ft_calloc to allocate memory
    void *std_mem = calloc(count, size);
    void *ft_mem = ft_calloc(count, size);

    // Check if the memory was allocated
    if (!std_mem || !ft_mem) {
        printf("Memory allocation failed.\n");
        if (std_mem) free(std_mem);
        if (ft_mem) free(ft_mem);
        return;
    }

    // Print memory for both allocated blocks (we'll print only the first 10 bytes)
    printf("calloc : ");
    print_memory(std_mem, 10);

    printf("ft_calloc : ");
    print_memory(ft_mem, 10);

    // Compare the allocated memory
    if (memcmp(std_mem, ft_mem, count * size) == 0) {
        printf("The results are identical.\n");
    } else {
        printf("The results are different.\n");
    }

    // Free allocated memory
    free(std_mem);
    free(ft_mem);
}

int main() {
    // Test 1: Allocate memory for 5 integers
    printf("Test 1: Allocate memory for 5 integers\n");
    test_calloc_comparison(5, sizeof(int));

    // Test 2: Allocate memory for 10 characters
    printf("\nTest 2: Allocate memory for 10 characters\n");
    test_calloc_comparison(10, sizeof(char));

    // Test 3: Allocate memory for 50 floats
    printf("\nTest 3: Allocate memory for 50 floats\n");
    test_calloc_comparison(50, sizeof(float));

    // Test 4: Allocate zero memory (edge case)
    printf("\nTest 4: Allocate zero memory (edge case)\n");
    test_calloc_comparison(0, sizeof(double));

    return 0;
}
*/