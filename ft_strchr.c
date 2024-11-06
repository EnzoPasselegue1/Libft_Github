/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:24:12 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/06 11:24:12 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    if (s == NULL)
        return (NULL);
    while (*s)
    {
        if ((char)c == *s)
            return ((char *)s);
        s++;
    }
    if ((char)c == *s)
        return ((char *)s);
    return (NULL);
}