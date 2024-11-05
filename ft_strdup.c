/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s[len])
	{
		len++;
	}
	dup = malloc((len + 1) * sizeof(char));
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
void test_strdup(const char *str)
{
	//utilisation de ft_strdup
	printf("Test avec ft_strdup :\n");
	char *ft_result = ft_strdup(str);
	if (ft_result != NULL)
	{
		printf("Chaine dupliquee (ft_strdup) : %s\n", ft_result);
		free(ft_result);
	}
	else
		printf("Erreur d'allocation memoire dans ft_strdup.\n");

	//Utilisation de strdup
	printf("Test avec strdup");
	char *std_result = strdup(str);
	if (std_result != NULL)
	{
		printf("Chaine dupliquee (strdup) : %s\n", std_result);
		free(std_result);
	}
	else
		printf("Erreur d'allocation memoire dans strdup.\n");
}

int	main()
{
	//Test 1 : Chaine de longueur normale
	printf("Test 1 : Chaine \"Hello world\"\n");
	test_strdup("Hello world");

	printf("\n");
	//Test 2 : Chaine vide
	printf("Test 2 : Chaine \"\"\n");
	test_strdup("");

	printf("\n");
	//Test 3 : Chaine avec des espaces
	printf("Test 3 : Chaine \"    Spaces before and after    \"\n");
	test_strdup("    Spaces before and after    ");

	return (0);
}
*/