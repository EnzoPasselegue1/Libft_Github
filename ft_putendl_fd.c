/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlendl_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    write(fd, s, i);
    write(fd, "\n", 1);
}
/*
int main(void)
{
    //Test 1 : Ecriture sur la sortie standard (stdout)
    printf("Test1 : Ecriture de 'Hello, word!' sur stdout : \n");
    ft_putendl_fd("Hello, word!", STDOUT_FILENO);

    //Test 2 : Ecrire dans un fichier
    int fd = open("test_putendl_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Erreur d'ouverture du fichier");
        return (1);
    }

    printf("Test 2 : Ecriture de 'Hello from file' dans le test_putendl_output.txt :\n");
    ft_putendl_fd("Hello from file", fd);

    //Fermer le fichier apres l'ecriture
    close(fd);
    printf("Verifie le fichier test_putendl_output.txt pour le resultat.\n");

    //Test 3 : Ecriture sur la sortie d'erreur standard (stderr)
    printf("Test 3 : Ecriture de 'Error' stderr :\n");
    ft_putendl_fd("Error message", STDERR_FILENO);

    return (0);
}
*/