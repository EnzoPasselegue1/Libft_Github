/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return (1);
    else
        return (0);
}
/*
// Function to test and compare ft_isalnum and isalnum
void test_isalnum_comparison(int c) {
    int result_std = isalnum(c);
    int result_ft = ft_isalnum(c);

    printf("Character: %c (ASCII: %d)\n", c, c);
    printf("isalnum   : %d\n", result_std);
    printf("ft_isalnum: %d\n", result_ft);

    if (result_std == result_ft) {
        printf("The results are identical.\n");
    } else {
        printf("The results are different.\n");
    }
    printf("------------\n");
}

int main() {
    // Test with a digit
    test_isalnum_comparison('5');

    // Test with an uppercase letter
    test_isalnum_comparison('A');

    // Test with a lowercase letter
    test_isalnum_comparison('z');

    // Test with a non-alphanumeric character
    test_isalnum_comparison('#');

    // Test with a space
    test_isalnum_comparison(' ');

    // Test with an extended ASCII value
    test_isalnum_comparison(128);

    return 0;
}
*/