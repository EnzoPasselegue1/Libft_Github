/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/06 11:23:58 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/06 11:23:58 by enpassel         ###   ########lyon.fr   */
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

int	ft_len(char const *s, int i, char c)
{
	int	n;

	n = 0;
	while (s[i] != c)
	{
		i++;
		n++;
	}
	return (n);
}

char	*ft_sndup(char const *s, int i, int size, char c)
{
	int		n;
	char	*tab;

	n = 0;
	tab = malloc((size + 1) * sizeof(char));
	if (!tab)
		return (0);
	while (s[i] != c)
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
	int		i;
	int		size;
	int		len;
	int		k;
	char	**tab;

	size = ft_count_word(s, c);
	tab = malloc((size + 1) * sizeof(tab));
	if (!tab)
		return (0);
	i = 0;
	k = 0;
	tab[size] = 0;
	while (k < size)
	{
		while (s[i] == c)
			i++;
		len = ft_len(s, i, c);
		tab[k] = ft_sndup(s, i, len, c);
		i += len + 1;
		k++;
	}
	return (tab);
}
