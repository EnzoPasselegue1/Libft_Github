/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:14:15 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/06 11:14:15 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *pos;

    pos = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        pos[i] = 0;
        i++;
    }
}