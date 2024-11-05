/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int num_len(int n) {
	int len = 0;
	if (n <= 0) {
		len = 1; // For '0' or negative sign
	}
	while (n) {
		n /= 10;
		len++;
	}
	return len;
}

char *ft_itoa(int n) {
	int len = num_len(n);
	char *str = malloc(len + 1);
	if (!str) return NULL;

	str[len] = '\0';
	if (n == 0) {
		str[0] = '0';
		return str;
	}

	int is_negative = 0;
	if (n < 0) {
		if (n == -2147483648) {
			// Handle INT_MIN separately
			str[--len] = '8'; // INT_MIN is -2147483648
			n /= 10; // Now n is -214748364
		}
		is_negative = 1;
		n = -n;
	}

	while (n) {
		str[--len] = (n % 10) + '0';
		n /= 10;
	}

	if (is_negative) {
		str[--len] = '-';
	}

	return str;
}
/*
// Function to test and demonstrate ft_itoa
void test_ft_itoa(int n) {
    	char *result = ft_itoa(n);
    	if (result) {
    		printf("Integer: %d\n", n);
    		printf("ft_itoa : %s\n", result);
    		free(result); // Don't forget to free the allocated memory
    	} else {
    		printf("Memory allocation failed for integer: %d\n", n);
    	}
    	printf("------------\n");
    }

int main() {
    	// Test with positive integers
    	test_ft_itoa(0);       // Should return "0"
    	test_ft_itoa(42);      // Should return "42"
    	test_ft_itoa(12345);   // Should return "12345"

    	// Test with negative integers
    	test_ft_itoa(-1);      // Should return "-1"
    	test_ft_itoa(-123);    // Should return "-123"
    	test_ft_itoa(INT_MIN); // Should return "-2147483648"

    	// Test with large positive integer
    	test_ft_itoa(2147483647); // Should return "2147483647"

    	return 0;
}
*/