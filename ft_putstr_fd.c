/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int i;

    if (!s)
        return ;
    i = 0;
    while (s[i])
    {
        write (fd, &s[i], 1);
        i++;
    }
}
/*
int	main(void)
{
    //Test 1 : Writing to standard output (stdout)
    printf("Test 1 : Writing 'hello world' to standard output:\n");
    ft_putstr_fd("hello world", STDOUT_FILENO);
    printf("\n");

    //Test 2 : Writing to a file
    int fd = open("test_putstr_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        perror("Error opening file, test_putstr_output.txt");
        return 1;
    }

    printf("Test 2 : Writing 'Hello' to test_putstr_output.txt:\n");
    char str[] = "Hello";
    ft_putstr_fd(str, fd);
    close(fd);
    printf("Check the file test_putstr_output.txt for the result.\n");

    //Test 3 : Writing to standard error (stderr)
    printf("Test 3 : Writing 'standard error' to standard error:\n");
    ft_putstr_fd("standard error", STDERR_FILENO);
    printf("\n");

    return (0);
}
*/