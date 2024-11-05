/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *pos;

    pos  = (unsigned char *)s; 
    i = 0;
    while(i < n)
    {
        pos[i] = 0;
        i++;
    }
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

// Function to test and compare ft_bzero with bzero
void test_bzero_comparison(char *buffer, size_t n) {
    // Copy buffer to avoid altering the original
    char buffer_std[100];
    char buffer_ft[100];

    // Initialize both buffers with non-zero values for testing
    memset(buffer_std, 'A', 100);
    memset(buffer_ft, 'A', 100);

    // Call bzero and ft_bzero
    bzero(buffer_std, n);  // Use memset(buffer_std, 0, n) if bzero is unavailable
    ft_bzero(buffer_ft, n);

    // Display results
    printf("bzero (or memset 0) : ");
    print_memory(buffer_std, 10);  // Display the first 10 bytes for checking

    printf("ft_bzero : ");
    print_memory(buffer_ft, 10);  // Display the first 10 bytes for checking

    // Compare results
    if (memcmp(buffer_std, buffer_ft, 100) == 0) {
        printf("The results are identical.\n");
    } else {
        printf("The results are different.\n");
    }
}

int main() {
    // Declare buffer for testing
    char buffer[100];

    // Test 1: Zero bytes
    printf("Test 1: Zero bytes\n");
    test_bzero_comparison(buffer, 0);

    // Test 2: Five bytes
    printf("\nTest 2: Five bytes\n");
    test_bzero_comparison(buffer, 5);

    // Test 3: Ten bytes
    printf("\nTest 3: Ten bytes\n");
    test_bzero_comparison(buffer, 10);

    // Test 4: Fifty bytes
    printf("\nTest 4: Fifty bytes\n");
    test_bzero_comparison(buffer, 50);

    return 0;
}
*/