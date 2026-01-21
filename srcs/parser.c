/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:45:47 by misousa           #+#    #+#             */
/*   Updated: 2026/01/21 20:55:28 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

int is_multnbr(char **argv)
{
    int i;
    int j;
    int count;

    i = 0;
    count = 0;

    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            if(ft_isdigit(argv[i][j]))
                count++;
            j++;
        }
        i++;
    }

    if(count < 2)
        return 0;
    else
        return 1;
}

//doesnt work for double digit numbers

int is_nbr(char **argv)
{
    int i;
    int j;
    int alpha;

    i = 0;
    alpha = 0;
    while (argv[i])
    {
        j = 0;
        while (argv[i][j])
        {
            if(ft_isalpha(argv[i][j]) == 1)
                alpha = 1;
            j++;
        }
        i++;
    }
    
    return alpha;
}

//doesnt work at all
