/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    char    *string;
    
    if (s == NULL)
		return (NULL);
	i = 0;
	string = (void *)s;
	while (i < n)
	{
		if (string[i] == (char)c)
			return (&string[i]);
		i++;
	}
	return (NULL);
}
/*
int main() {
    char str[] = "Hello, world!";
    char ch = 'w';

    // Test 1: Comparing results for character 'w'
    char *result_std = (char *)memchr(str, ch, strlen(str));   // Standard function
    char *result_ft = (char *)ft_memchr(str, ch, strlen(str)); // Your function

    if (result_std == result_ft)
    {
        printf("Test 1: Both functions returned the same address for '%c'\n", ch);
    }
    else
    {
        printf("Test 1: Difference!\n");
        printf("memchr : %p\nft_memchr : %p\n", result_std, result_ft);
    }

    // Test 2: Comparing results for a non-present character 'z'
    ch = 'z';
    result_std = (char *)memchr(str, ch, strlen(str));
    result_ft = (char *)ft_memchr(str, ch, strlen(str));

    if (result_std == result_ft)
    {
        printf("Test 2: Both functions returned the same value for '%c'\n", ch);
    }
    else
    {
        printf("Test 2: Difference!\n");
        printf("memchr : %p\nft_memchr : %p\n", result_std, result_ft);
    }

    // Test 3: Comparing results for a limited range and character 'o'
    ch = 'o';
    result_std = (char *)memchr(str, ch, 5);   // Standard function
    result_ft = (char *)ft_memchr(str, ch, 5); // Your function

    if (result_std == result_ft)
    {
        printf("Test 3: Both functions returned the same value for '%c' within the limited range\n", ch);
    }
    else
    {
        printf("Test 3: Difference!\n");
        printf("memchr : %p\nft_memchr : %p\n", result_std, result_ft);
    }
    return 0;
}
*/
//The objective of the memchr function is to search for the first occurrence of a specified byte
// (character) in a block of memory and return a pointer to that location, or NULL if the byte is not
// found within the specified range.
