/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:27:11 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/06 11:27:11 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t beg;
    size_t end;
    char *new;

    if (!s1 || !set)
        return (NULL);
    beg = 0;
    while (s1[beg] && ft_strchr(set, s1[beg]))
        beg++;
    end = ft_strlen(s1 + beg);
    if (end)
        while (s1[end + beg - 1] != 0 && ft_strchr(set, s1[end + beg - 1]) != 0)
            end--;
    if (!(new = malloc(sizeof(char) * end + 1)))
        return (NULL);
    ft_strncpy(new, s1 + beg, end);
    new[end] = '\0';
    return (new);
}