/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:25:43 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/06 11:25:43 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    unsigned int len;
    char *tab;

    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    tab = malloc(sizeof(char) * len + 1);
    if (!tab)
        return (NULL);
    i = 0;
    while (s[i])
    {
        tab[i] = f(i, s[i]);
        i++;
    }
    tab[i] = '\0';
    return (tab);
}