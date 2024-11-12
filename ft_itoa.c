/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:49:46 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/12 09:49:46 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	num_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		len = 1;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t		len;
	int			is_negative;
	char		*str;
	long		longnum;

	len = num_len(n);
	str = malloc(len + 1);
	longnum = (long)n;
	if (!str)
		return (NULL);
	str[len] = '\0';
	is_negative = 0;
	if (longnum < 0)
	{
		is_negative = 1;
		longnum = -longnum;
	}
	while (len)
	{
		str[--len] = (longnum % 10) + '0';
		longnum /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
