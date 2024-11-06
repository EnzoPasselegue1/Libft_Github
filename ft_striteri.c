/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:24:38 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/06 11:24:38 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t i;

    i = 0;
    while (s[i])
    {
        (*f)(i, s + i);
        i++;
    }
}