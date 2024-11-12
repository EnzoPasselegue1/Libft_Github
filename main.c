/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpassel <enpassel@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:07:51 by enpassel          #+#    #+#             */
/*   Updated: 2024/11/08 17:27:14 by enpassel         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    //ATOI//
    printf("Test Atoi\n");
    if (ft_atoi("123456789") == atoi("123456789"))
        printf ("SUCESS Test 1\n");
    else
        printf ("Error test 1\n");
    
    if (ft_atoi("-6543777777777777777777777777777") == atoi("-6543777777777777777777777777777"))
        printf ("SUCESS Test 2\n");
    else
        printf ("Error test 2\n");

    if (ft_atoi("0") == atoi("0"))
        printf ("SCCESS Test 3\n");
    else
        printf ("Error test 3\n");

    if (ft_atoi("56785678567856785678567856785678") == atoi("56785678567856785678567856785678"))
        printf ("SUCESS Test 4\n");
    else
        printf ("Error test 4\n");

    if (ft_atoi("-45376554") == atoi("-45376554"))
        printf ("SUCESS Test 5\n");
    else
        printf ("Error test 5\n");

    //FT_BZERO
    printf("\nTest Bzero\n");

    char tab_bzt[100];
    char tab_bzo[100];

    ft_bzero(tab_bzt, 10);
    bzero(tab_bzo, 10);
    if(memcmp(tab_bzt, tab_bzo, 10) == 0)
        printf("SUCESS test 1\n");
    else
        printf ("Error test 1\n");

    ft_bzero(tab_bzt, 0);
    bzero(tab_bzo, 0);
    if(memcmp(tab_bzt, tab_bzo, 0) == 0)
        printf("SUCESS test 2\n");
    else
        printf ("Error test 2\n");

    ft_bzero(tab_bzt, 100);
    bzero(tab_bzo, 100);
    if(memcmp(tab_bzt, tab_bzo, 100) == 0)
        printf("SUCESS test 3\n");
    else
        printf ("Error test 3\n");

    //ISALNUM
    printf("\nTest isalnum\n");
    {
        if(ft_isalnum(45) == isalnum(45))
            printf("SUCESS Test 1\n");
        else
            printf("Error test 1\n");
        
        if(ft_isalnum(0) == isalnum(0))
            printf("SUCESS Test 2\n");
        else
            printf("Error test 2\n");

        if(ft_isalnum(555) == isalnum(555))
            printf("SUCESS Test 3\n");
        else
            printf("Error test 3\n");
        
        if(ft_isalnum(-152) == isalnum(-152))
            printf("SUCESS Test 4\n");
        else
            printf("Error test 4\n");
    }

    //ISALPHA
        printf("\nTest isalpha\n");

        if(ft_isalpha(12) == isalpha(12))
            printf("SUCESS Test 1\n");
        else
            printf("Error test 1\n");
        
        if(ft_isalpha(0) == isalpha(0))
            printf("SUCESS Test 2\n");
        else
            printf("Error test 2\n");

        if(ft_isalpha(555) == isalpha(555))
            printf("SUCESS Test 3\n");
        else
            printf("Error test 3\n");
            
        if(ft_isalpha(-152) == isalpha(-152))
            printf("SUCESS Test 4\n");
        else
            printf("Error test 4\n");

    //ISALPHA
        printf("\nTest isalpha\n");

        if(ft_isalpha(12) == isalpha(12))
            printf("SUCESS Test 1\n");
        else
            printf("Error test 1\n");
        
        if(ft_isalpha(0) == isalpha(0))
            printf("SUCESS Test 2\n");
        else
            printf("Error test 2\n");

        if(ft_isalpha(555) == isalpha(555))
            printf("SUCESS Test 3\n");
        else
            printf("Error test 3\n");
            
        if(ft_isalpha(-152) == isalpha(-152))
            printf("SUCESS Test 4\n");
        else
            printf("Error test 4\n");


    //MEMCPY
    printf("\nTest memcpy\n");
	char	tab_cpy[20];
	int	i;

	i = 0;
	while (i < 20)
	{
		tab_cpy[i] = 'X';
		i += 1;
	}

	tab_cpy[8] = 'A';
	tab_cpy[9] = 'B';
	tab_cpy[10] = 'C';
	tab_cpy[11] = 'D';
	tab_cpy[12] = 'E';

	printf("%s\n", tab_cpy);
	ft_memcpy(tab_cpy + 14, tab_cpy + 8, 5);
	printf("%s\n", tab_cpy);

    //MEMMOVE
    printf("\nTest memmove\n");
    char	tab_mov[20];
	int	j;

	j = 0;
	while (j < 20)
	{
		tab_mov[j] = 'X';
		j += 1;
	}

	tab_mov[8] = 'A';
	tab_mov[9] = 'B';
	tab_mov[10] = 'C';
	tab_mov[11] = 'D';
	tab_mov[12] = 'E';

	printf("%s\n", tab_mov);
	ft_memmove(tab_mov + 5, tab_mov + 8, 5);
	printf("%s\n", tab_mov);

    //MEMSET
    printf("\nTest memset\n");

    char    tab_set[20];

    tab_set[8] = 'A';
	tab_set[9] = 'B';
	tab_set[10] = 'C';
	tab_set[11] = 'D';
	tab_set[12] = 'E';
    ft_memset(tab_set, 'A', 10);
    printf("%s\n", tab_set);

    //MEMCHR
    printf("\nTest memchr\n");
    char    tab_chr[20];

    tab_chr[8] = 'A';
	tab_chr[9] = 'B';
	tab_chr[10] = 'C';
	tab_chr[11] = 'D';
	tab_chr[12] = 'E';

    if (ft_memchr(tab_chr, 'D', 20) == NULL)
        printf("ERROR\n");
    else
        printf("SUCESS\n");
    if (ft_memchr(tab_chr, 'p', 20) == NULL)
        printf("ERROR\n");
    else
        printf("SUCESS\n");
    
    //MEMCMP
    printf("\nTest memcmpr\n");
    char    tab_cmp[20];
    char    tab_cmp2[20];

    tab_cmp[0] = 'A';
	tab_cmp[1] = 'B';
	tab_cmp[2] = 'C';
	tab_cmp[3] = 'D';
	tab_cmp[4] = 'E';

    tab_cmp2[0] = 'A';
	tab_cmp2[1] = 'B';
	tab_cmp2[2] = 'C';
	tab_cmp2[3] = 'D';
	tab_cmp2[4] = 'E';

    if(ft_memcmp(tab_cmp, tab_cmp2, 5) == 0)
        printf("aucune differences");
    else
        printf("il y a une difference");
    

}