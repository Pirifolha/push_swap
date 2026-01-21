/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:50:08 by misousa           #+#    #+#             */
/*   Updated: 2026/01/21 20:50:19 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int main (int argc, char **argv)
{
    if (argc > 0)
        {
            if(!is_multnbr(argv))
                return (ft_printf("Error\n"), 0);
            else if(is_nbr(argv) == 0)
                return (ft_printf("Errora\n"), 0);
        }
}