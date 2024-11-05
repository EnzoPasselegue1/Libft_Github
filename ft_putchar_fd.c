/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
/*
int	main(void)
{
    //Test 1 : Writing to standard output (stdout)
    printf("Test 1 : Writing 'A' to standard output:\n");
    ft_putchar_fd('A', STDOUT_FILENO);
    printf("\n");

    //Test 2 : Writing to a file
    int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Error opening file");
        return 1;
    }

    printf("Test 2 : Writing 'Hello' to test_output.txt:\n");
    char str[] = "Hello";
    for (int i = 0; str[i] != '\0'; i++)
    {
        ft_putchar_fd(str[i], fd);
    }
    close(fd);
    printf("Check the file test_output.txt for the result.\n");

    //Test 3 : Writing to standard error (stderr)
    printf("Test 3 : Writing 'B' to standard error:\n");
    ft_putchar_fd('B', STDERR_FILENO);
    printf("\n");

    return (0);
}
*/