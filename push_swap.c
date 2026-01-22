/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:50:08 by misousa           #+#    #+#             */
/*   Updated: 2026/01/22 21:46:14 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int main (int argc, char **argv)
{
    if (argc > 0)
        {
            if(is_multnbr(argv) < 2)
                return (ft_printf("Error\n"), 0);
            else if(!is_nbr(argv))
                return (ft_printf("Error\n"), 0);
            else if(!is_rep_nbr(argv))
                return (ft_printf("Errorr\n"), 0);    
        }
}