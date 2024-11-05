/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:11:17 by enpassel          #+#    #+#             */
/*   Updated: 2024/09/18 12:11:18 by enpassel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_count_word(char const *s, char c)
{
	int	count;
	int	i;
	int	on_off;

	i = 0;
	count = 0;
	on_off = 1;
	while(s[i])
	{
		if (s[i] == c)
		{
			on_off = 1;
		}
		if (s[i] != c && on_off == 1)
		{
			count += 1;
			on_off = 0;
		}
		i++;
	}
	return (count);
}

int	ft_len(char const *s, int	i, char c)
{
	int	n;

	n = 0;
	while(s[i] != c)
	{
		i++;
		n++;
	}
	return(n);
}

char	*ft_sndup(char const *s, int i, int size, char c)
{
	int	n;
	char	*tab;

	n = 0;
	tab = malloc((size + 1) * sizeof(char));
	if(!tab)
		return (0);
	while(s[i] != c)
	{
		tab[n] = s[i];
		i++;
		n++;
	}
	tab[n] = '\0';
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	size;
	int	len;
	char	**tab;
	int	k;

	size = ft_count_word(s, c);
	tab = malloc((size + 1) * sizeof(tab));
	if (!tab)
		return (0);
	i = 0;
	k = 0;
	tab [size] = 0;
	while (k < size)
	{
		while(s[i] == c)
			i++;
		len = ft_len(s, i, c);
		tab[k] = ft_sndup(s, i, len, c);
		i += len + 1;
		k++;
	}
	return (tab);
	
}
/*
void	test_split(char *input, char delimiter) {
	printf("Test avec ft_split :\n");
	char **result1 = ft_split(input, delimiter);
	int i = 0;
	while (result1[i]) {
		printf("Mot %d : %s\n", i + 1, result1[i]);
		free(result1[i]);
		i++;
	}
	free(result1);

	//Utilisation de strtok pour comparaison
	printf("Test avec strtok :\n");
	char input_copy[256];
	strcpy(input_copy, input);

	char *token = strtok(input_copy, &delimiter);
	while (token != NULL)
	{
		printf("Mot %d : %s\n", i, token);
		token = strtok(NULL, &delimiter);
		i++;
	}
}
int	main() {
	//Test 1 : Chaine avec des espaces
	printf("Test 1 : Chaine \"Hello world this is C\" avec ' ' comme separateur\n");
	test_split("Hello world this is C", ' ');

	//Test 2 : chaine avec des virgules
	printf("\nTest 2 : Chaine \"apple,orange,banana\" avec ',' comme separateur\n");
	test_split("apple,orange,banana", ',');

	//Test 3 : Chaine avec des deliminateur multiples
	printf("\nTest 3 : Chaine \",,,split,these,words,,\" avec ',' comme separateur\n");
	test_split(",,,split,these,words,,", ',');

	return (0);
}
*/