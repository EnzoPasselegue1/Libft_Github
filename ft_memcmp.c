/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
            return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
        i++;
    }
    return (0);
}
/*
int     main(void)
{
    char str1[] = "hello world";
    char str2[] = "hello world";
    char str3[] = "hello Mars";

    // Test 1: Comparing identical strings
    int result_ftd = memcmp(str1, str2, strlen(str1));
    int result_ft = ft_memcmp(str1, str2, strlen(str1));
    if (result_ftd == result_ft)
    {
        printf("OK\n");
    }
    else
    {
        printf("FAIL\n");
    }
    // Test 2: Comparing different strings (str1 vs str3)
    result_ftd = memcmp(str1, str3, strlen(str1));
    result_ft = ft_memcmp(str1, str3, strlen(str1));
    if (result_ftd == result_ft)
    {
        printf("OK Test2\n");
    }
    else
    {
        printf("FAIL Test2\n");
    }
    // Test 3: Comparing partial blocks of memory (first 5 bytes of str1 and str3)
    result_ftd = memcmp(str1, str3, 5);
    result_ft = ft_memcmp(str1, str3, 5);
    if (result_ftd == result_ft)
    {
        printf("OK Test3\n");
    }
    else
    {
        printf("FAIL Test3\n");
    }
    return (0);
}
*/
// The objective of the `memcmp` function is to compare two blocks of memory byte by byte
// and return an integer indicating whether the first block is less than, equal to, or greater
// than the second block.