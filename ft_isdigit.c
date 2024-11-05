/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_isdigit(int c)
{
    return  (c >= 48 && c <= 57);
}
/*
// Function to test and compare ft_isdigit and isdigit
void test_isdigit_comparison(int c) {
    int result_std = isdigit(c);
    int result_ft = ft_isdigit(c);

    printf("Character: %c (ASCII: %d)\n", c, c);
    printf("isdigit   : %d\n", result_std);
    printf("ft_isdigit: %d\n", result_ft);

    if (result_std == result_ft) {
        printf("The results are identical.\n");
    } else {
        printf("The results are different.\n");
    }
    printf("------------\n");
}

int main() {
    // Test with digit characters
    test_isdigit_comparison('0');  // Should return true
    test_isdigit_comparison('5');  // Should return true
    test_isdigit_comparison('9');  // Should return true

    // Test with non-digit characters
    test_isdigit_comparison('a');  // Should return false
    test_isdigit_comparison('Z');  // Should return false
    test_isdigit_comparison(' ');  // Should return false

    // Test with extended ASCII values
    test_isdigit_comparison(128);  // Should return false
    test_isdigit_comparison(255);  // Should return false

    return 0;
}
*/