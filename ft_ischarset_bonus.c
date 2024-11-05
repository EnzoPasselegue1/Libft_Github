/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_ischarset(char test, const char *charset)
{
    size_t i;

    i = 0;
    while(charset[i])
    {
        if (test == charset[i])
            return (1);
        i++;
    }
    return (0);
}
/*
// Function to test and compare ft_is_charset and a reference implementation
void test_is_charset_comparison(int c, const char *charset) {
    bool result_std = strchr(charset, c) != NULL;
    bool result_ft = ft_ischarset(c, charset);

    printf("Character: %c (ASCII: %d)\n", c, c);
    printf("Charset: %s\n", charset);
    printf("Reference: %d\n", result_std);
    printf("ft_is_charset: %d\n", result_ft);

    if (result_std == result_ft) {
        printf("The results are identical.\n");
    } else {
        printf("The results are different.\n");
    }
    printf("------------\n");
}

int main() {
    // Define a character set for testing
    const char *charset = "abc123";

    // Test with characters that are in the charset
    test_is_charset_comparison('a', charset);  // Should be true
    test_is_charset_comparison('1', charset);  // Should be true

    // Test with characters that are not in the charset
    test_is_charset_comparison('z', charset);  // Should be false
    test_is_charset_comparison('9', charset);  // Should be false

    // Test with a non-printable character
    test_is_charset_comparison('\n', charset); // Should be false

    return 0;
}
*/