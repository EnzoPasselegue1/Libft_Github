/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:51:10 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/12 09:51:10 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*original_dst;

	if (!dest && !src)
		return (NULL);
	original_dst = dest;
	while (n--)
		*((char *)dest++) = *((char *)src++);
	return (original_dst);
}
