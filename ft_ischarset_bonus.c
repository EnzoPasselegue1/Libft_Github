/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/11/06 11:15:41 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/06 11:15:41 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_ischarset(char test, const char *charset)
{
	size_t	i;

	i = 0;
	while (charset[i])
	{
		if (test == charset[i])
			return (1);
		i++;
	}
	return (0);
}
