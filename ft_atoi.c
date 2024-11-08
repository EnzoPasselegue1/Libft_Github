/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:13:49 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/06 11:13:49 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <errno.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	size_t			i;
	int				count;
	unsigned long	final;

	i = 0;
	count = 1;
	final = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			count *= -1;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (((final * 10) + (nptr[i] - 48)) > 9223372036854775807 && count == 1)
			return (-1);
		else if (((final * 10) + (nptr[i] - 48)) > 9223372036854775807
			&& count == -1)
			return (0);
		final = final * 10;
		final = (final + (nptr[i] - 48));
		i++;
	}
	return (final * count);
}
