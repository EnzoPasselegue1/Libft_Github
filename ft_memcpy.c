/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*original_dst;

	if (!dest && !src)
		return (NULL);
	original_dst = dest;
	while (n--)
		*((char *)dest++) = *((char *)src++);
	return (original_dst);
}
/*
int main(void)
{
    char src[] = "Hello, world!";
    char dest_std[20];
    char dest_ft[20];

    //Test1 copying the entire string
    memcpy(dest_std, src, strlen(src) + 1);
    ft_memcpy(dest_ft, src, strlen(src) + 1);
    if (strcmp(dest_std, dest_ft) == 0)
        printf("Test1 :Both function are correct\n");
    else
    {
        printf("Test1 :Both function are not correct\n");
        printf("memcpy %s\n", dest_std);
        printf("ft_memcpy %s\n", dest_ft);
    }

    //Test2 copying a part of string
    memcpy(dest_std, src, 5);
    ft_memcpy(dest_ft, src, 5);

    dest_std[5] = '\0';
    dest_ft[5] = '\0';

    if (strcmp(dest_std, dest_ft) == 0)
        printf("Test2 :Both function are correct\n");
    else
    {
        printf("Test2 :Both function are not correct\n");
        printf("memcpy %s\n", dest_std);
        printf("ft_memcpy %s\n", dest_ft);
    }
    return (0);
}
*/
//The objective of the `memcpy` function is to copy a specified number
//of bytes from a source memory location to a destination memory location
//without handling overlapping regions.