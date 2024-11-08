/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/06 11:24:52 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/06 11:24:52 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	size_t		len1;
	size_t		len2;
	char		*tab;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		tab = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
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
