/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*tab;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		tab = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
		if (tab == NULL)
			return (NULL);
		i = -1;
		while (s1[++i])
			tab[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			tab[len1] = s2[i];
			len1++;
		}
		tab[len1] = '\0';
		return (tab);
	}
	return (NULL);
}
/*
void    test_tabjoin(char const *s1, char const *s2) {
    //Utilisation de ft_tabjoin
    char    *result = ft_tabjoin(s1, s2);

    if(result != NULL) {
        printf("Concatenation de \"%s\" et \"%s\" : %s\n", s1, s2, result);
        free (result);
    }
    else
        printf("Erreur d'allocation mémoire pour la concaténation de \"%s\" et \"%s\".\n", s1, s2);
}

int main(void) {
    //Test1 : Concatenation de deux chaine classiques
    printf("Test 1 : Concatenation de \"Hello\" et \"World\"\n");
    test_tabjoin("Hello", "World");
    printf("\n");

    //Test2 : Concatenation d'une chaine vide avec une chaine non vide
    printf("Test 2 : Concatenation de \"\" et \"World\"\n");
    test_tabjoin("", "World");
    printf("\n");

    //Test3 : Concatenation de deux chaine vide
    printf("Test 3 : Concatenation de \"\" et \"\"\n");
    test_tabjoin("", "");
    printf("\n");

    //Test4 : Concatenantion de longue chaine
    printf("Test 4 : Concatenation de \"Longtabing1\" et \"Longtabing2\"\n");
    test_tabjoin("Longtabing1", "Longtabing2");
    printf("\n");

    return 0;
}
*/