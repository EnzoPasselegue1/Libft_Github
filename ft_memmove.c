/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    if(!dest || !src)
        return (0);
    i = 0;
    if ((size_t)dest - (size_t)src < n)
    {
        i = n - 1;
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i--;
        }
    }
    else
    {
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dest);
}
/*
int main(void)
{
    char src[] = "hello world";
    char dest_std[20];
    char dest_ft[20];

    //Test1 : Copying entire string without overlap
    memmove(dest_std, src, strlen(src) + 1);
    ft_memmove(dest_ft, src, strlen(src) + 1);
    if (strcmp(dest_ft, dest_std) == 0)
    {
        printf("Test1 OK Both functions copied the string correctly without overlap.\n");
    }
    else \
    {
        printf("Test1 Differences in copied strings\n");
        printf("memmove  :%s\n", dest_std);
        printf("memmove :%s\n", dest_ft);
    }

    //Test 2: Overlapping regions (source starts before destination)
    char overlap_src[] = "ABCDEFGHI";
    memmove(overlap_src + 2, overlap_src, 5);
    printf("Test 2 (memmove overlap): %s\n", overlap_src);

    char overlap_ft_src[] = "ABCDEFGHI";
    ft_memmove(overlap_ft_src + 2, overlap_ft_src, 5);
    printf("Test 2 (ft_memmove overlap): %s\n", overlap_ft_src);

    //Test3: Overlapping regions (source starts after destination)
    char reverse_overlap_src[] = "123456789";
    memmove(reverse_overlap_src, reverse_overlap_src + 2, 5);
    printf("Test 2 (memmove reverse_overlap): %s\n", reverse_overlap_src);

    char reverse_overlap_ft_src[] = "123456789";
    ft_memmove(reverse_overlap_ft_src, reverse_overlap_ft_src + 2, 5);
    printf("Test 2 (memmove reverse_overlap): %s\n", reverse_overlap_ft_src);

    return 0;
}
*/
//The objective of the memmove function is to copy a specified number of bytes from
//a source memory location to a destination memory location, handling overlapping
//regions safely by ensuring data integrity during the copy process.