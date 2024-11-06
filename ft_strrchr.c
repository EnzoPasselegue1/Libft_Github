/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/11/06 11:26:59 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/06 11:26:59 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*base;

	base = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *base && (char)c != *s)
		s--;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}
