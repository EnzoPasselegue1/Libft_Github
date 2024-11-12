/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:53:28 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/12 09:53:28 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;

	i = ft_strlen(s);
	s = (s + i);
	while (i != 0 && (unsigned char)c != *s)
	{
		s--;
		i--;
	}
	if ((unsigned char)c == *s)
		return ((char *)s);
	return (0);
}
