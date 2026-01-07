/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opeartions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:35:04 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/01/07 17:19:23 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctype.h>
# include <limits.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>
#include "pushswap.h"

t_lst *swap_a(t_lst *top)
{
    int tmp;
    tmp = 0;

    tmp = top->data;
    top->data = top->next->data;
    top->next->data = tmp;

    return (top);
}

int main ()
{
    
        t_lst *head = NULL;
        t_lst *last = NULL;
        int i = 4;
        int j = 2;

        head = malloc(sizeof(t_lst));
        last = malloc(sizeof(t_lst));

        head->next = last;
        last->next = NULL;

        head->data = i;
        head->data = j;

        printf("%d", head->data);
        printf("%d", last->data);

}