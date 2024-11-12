/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:52:53 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/12 09:52:53 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	len2;
	size_t	i;
	size_t	n;

	n = 0;
	len2 = 0;
	len = 0;
	while (dest[len2])
		len2++;
	while (src[len])
		len++;
	if (len2 >= size)
		return (len + size);
	i = len2;
	while (src[n] && i < size - 1)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (len2 + len);
}
