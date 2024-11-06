/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:24:27 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/06 11:24:27 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strdup(const char *s)
{
	char *dup;
	int len;
	int i;

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