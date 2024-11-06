/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:17:25 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/06 11:17:25 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
    if (*alst == NULL)
    {
        *alst = new;
    }
    else
    {
        t_list *last = *alst;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new;
    }
}