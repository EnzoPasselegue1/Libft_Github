/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    else
        return (0);
}
/*
// Function to test and compare ft_isalpha and isalpha
void test_isalpha_comparison(int c) {
    int result_std = isalpha(c);
    int result_ft = ft_isalpha(c);

    printf("Character: %c (ASCII: %d)\n", c, c);
    printf("isalpha   : %d\n", result_std);
    printf("ft_isalpha: %d\n", result_ft);

    if (result_std == result_ft) {
        printf("The results are identical.\n");
    } else {
        printf("The results are different.\n");
    }
    printf("------------\n");
}

int main() {
    // Test with an uppercase letter
    test_isalpha_comparison('A');

    // Test with a lowercase letter
    test_isalpha_comparison('z');

    // Test with a digit
    test_isalpha_comparison('5');

    // Test with a non-alphabetic character
    test_isalpha_comparison('#');

    // Test with a space
    test_isalpha_comparison(' ');

    // Test with an extended ASCII value
    test_isalpha_comparison(128);

    return 0;
}
*/