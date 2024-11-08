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
	int	i;
	int	count;
	unsigned long	final;

	i = 0;
	count = 1;
	final = 0;


	while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
		|| nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
	{
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			count *= -1;
		i++;
	}
	
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (((final * 10) + (nptr[i] - 48)) > 9223372036854775807 && count == 1)
			return (-1);
		else if (((final * 10) + (nptr[i] - 48)) > 9223372036854775807 && count == -1)
			return (0);
		final = final * 10;
		final = (final + (nptr[i] - 48));
		i++;
	}
	return (final * count);
}
// int	main(int argc, char **argv)
// {
// 	printf("%d\n", atoi(argv[1]));
// }