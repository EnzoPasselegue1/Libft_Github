/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memset (void *s, int c, size_t n)
{
    size_t              i;
    unsigned char   *pos;

    i = 0;
    pos = (unsigned char *)s;
    while (i < n)
    {
        pos[i] = (unsigned char)c;
        i++;
    }
    return (s);
}
/*
int main(void)
{
    char buffer_std[20];
    char buffer_ft[20];

    strcpy(buffer_std, "hello world");
    strcpy(buffer_ft, "hello world");

    //Test1 : Setting the first 5 caracteres to A
    memset(buffer_std, 'A', 5);
    ft_memset(buffer_ft, 'A', 5);

    if (strcmp(buffer_std, buffer_ft) == 0)
        printf("Test 1 OK, Both functions set the first 5 characters correctly.\n");
    else
    {
        printf("Test 1, KO Difference in memset results!\n");
        printf("memset    : %s\n", buffer_std);
        printf("ft_memset : %s\n", buffer_ft);
    }

    //Test2 : Setting the entire buffer to 'B'
    memset(buffer_std, 'B', strlen(buffer_std));
    ft_memset(buffer_ft, 'B', strlen(buffer_ft));

    if (strcmp(buffer_std, buffer_ft) == 0)
        printf("Test 2 OK, Both functions set the entire buffer to 'B' correctly.\n");
    else
    {
        printf("Test 2, KO Difference in memset results!\n");
        printf("memset    : %s\n", buffer_std);
        printf("ft_memset : %s\n", buffer_ft);
    }

    //Test 3 : Setting buffer to 0 (null byte)
    memset(buffer_std, '\0', strlen(buffer_std));
    ft_memset(buffer_ft, '\0', strlen(buffer_ft));

    if (strcmp(buffer_std, buffer_ft) == 0)
        printf("Test 3 OK, Both functions set the entire buffer to '\0' correctly.\n");
    else
    {
        printf("Test 3, KO Difference in memset results!\n");
        printf("memset    : %s\n", buffer_std);
        printf("ft_memset : %s\n", buffer_ft);
    }
    return (0);
}
*/
// The objective of the `memset` function is to fill a block of memory with
// a specified byte value, setting each byte of the memory region to the given
// value for a specified number of bytes.