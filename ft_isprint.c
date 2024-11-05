/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_isprint(int  c)
{
    return (c >= 32 && c <= 126);
}
/*
// Function to test and compare ft_isprint and isprint
void test_isprint_comparison(int c) {
    int result_std = isprint(c);
    int result_ft = ft_isprint(c);

    printf("Character: %c (ASCII: %d)\n", c, c);
    printf("isprint   : %d\n", result_std);
    printf("ft_isprint: %d\n", result_ft);

    if (result_std == result_ft) {
        printf("The results are identical.\n");
    } else {
        printf("The results are different.\n");
    }
    printf("------------\n");
}

int main() {
    // Test with printable characters
    test_isprint_comparison(' ');  // Space (should return true)
    test_isprint_comparison('A');  // Uppercase letter (should return true)
    test_isprint_comparison('z');  // Lowercase letter (should return true)
    test_isprint_comparison('0');  // Digit (should return true)
    test_isprint_comparison('~');  // Tilde (should return true)

    // Test with non-printable characters
    test_isprint_comparison(0);    // Null character (should return false)
    test_isprint_comparison(31);   // Unit Separator (should return false)
    test_isprint_comparison(127);  // Delete character (should return false)

    // Test with extended ASCII values
    test_isprint_comparison(128);  // Extended ASCII character (should return false)
    test_isprint_comparison(255);  // Extended ASCII character (should return false)

    return 0;
}
*/