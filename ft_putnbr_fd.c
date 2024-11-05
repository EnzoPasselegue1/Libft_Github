/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		ft_putchar_fd(nb + 48, fd);
	}
}
/*
int	main()
{
	// Test 1 : Écriture sur la sortie standard (stdout)
	printf("Test 1 : Ecriture de l'entier 12345 sur stdout :\n");
	ft_putnbr_fd(12345, STDOUT_FILENO);
	printf("\n");

	// Test 2 : Écriture d'un entier négatif sur stdout
	printf("Test 2 : Ecriture de l'entier -98765 sur stdout :\n");
	ft_putnbr_fd(-98765, STDOUT_FILENO);
	printf("\n");

	// Test 3 : Écriture d'un entier dans un fichier
	int fd = open("test_putnbr_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Erreur d'ouverture du fichier");
		return 1;
	}

	printf("Test 3 : Ecriture de l'entier 42 dans test_putnbr_output.txt :\n");
	ft_putnbr_fd(42, fd);
	close(fd);
	printf("Verifie le fichier test_putnbr_output.txt pour le resultat.\n");

	// Test 4 : Écriture de la valeur minimum d'un entier (INT_MIN) sur stderr
	printf("Test 4 : Ecriture de INT_MIN (-2147483648) sur stderr :\n");
	ft_putnbr_fd(-2147483648, STDERR_FILENO);
	printf("\n");

	return 0;
}
*/
