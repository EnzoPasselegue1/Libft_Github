/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_isascii(int  c)
{
    return (c >= 0 && c <= 127);
}
/*
// Function to test and compare ft_isascii and isascii
void test_isascii_comparison(int c) {
    int result_std = isascii(c);
    int result_ft = ft_isascii(c);

    printf("Character: %c (ASCII: %d)\n", c, c);
    printf("isascii   : %d\n", result_std);
    printf("ft_isascii: %d\n", result_ft);

    if (result_std == result_ft) {
        printf("The results are identical.\n");
    } else {
        printf("The results are different.\n");
    }
    printf("------------\n");
}

int main() {
    // Test with ASCII characters
    test_isascii_comparison('A');  // Uppercase letter
    test_isascii_comparison('z');  // Lowercase letter
    test_isascii_comparison('5');  // Digit

    // Test with non-ASCII characters
    test_isascii_comparison(128);  // Extended ASCII character
    test_isascii_comparison(255);  // Another extended ASCII character

    // Test with control characters
    test_isascii_comparison(0);    // Null character
    test_isascii_comparison(31);   // Unit Separator

    return 0;
}
*/