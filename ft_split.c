/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:52:24 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/12 09:52:24 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	ft_count_word(char const *s, char c)
{
	size_t	count;
	size_t	i;
	int		on_off;

	i = 0;
	count = 0;
	on_off = 1;
	while (s[i])
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

static int	ft_len(char const *s, int i, char c)
{
	size_t	n;

	n = 0;
	while (s[i] != c && s[i])
	{
		i++;
		n++;
	}
	return (n);
}

static char	*ft_strndup(char const *s, int i, int size, char c)
{
	size_t		n;
	char		*tab;

	n = 0;
	tab = malloc((size + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	while (s[i] != c && s[i])
	{
		tab[n] = s[i];
		i++;
		n++;
	}
	tab[n] = '\0';
	return (tab);
}

static char	**ft_free(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free (tab[i]);
		i++;
	}
	free (tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		size;
	size_t		len;
	size_t		k;
	char		**tab;

	size = ft_count_word(s, c);
	tab = malloc((size + 1) * sizeof(tab));
	if (!tab)
		return (NULL);
	i = 0;
	k = 0;
	tab[size] = 0;
	while (k < size)
	{
		while (s[i] == c)
			i++;
		len = ft_len(s, i, c);
		tab[k] = ft_strndup(s, i, len, c);
		if (!tab[k])
			return (ft_free(tab));
		i += len;
		k++;
	}
	return (tab);
}
