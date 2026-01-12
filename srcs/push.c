/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:30:29 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/01/12 17:58:11 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

lst *del_node(lst);

lst *push_b(lst *top_a, lst *top_b)
{
    // lst *head;
    // head = top_a;

    top_b->data = top_a->data;
    top_a = top_a->next;

	ft_printf("pb");
    return (top_b);
}

int main ()
{

		lst *head = NULL;
		lst *mid = NULL;
		lst *last = NULL;
        lst *headb = NULL;
		lst *midb = NULL;
		lst *lastb = NULL;

		head = malloc(sizeof(lst));
		mid = malloc(sizeof(lst));
		last = malloc(sizeof(lst));
        headb = malloc(sizeof(lst));
		midb = malloc(sizeof(lst));
		lastb = malloc(sizeof(lst));

		head->next = mid;
		mid->next = last;
		last->next = NULL;
        headb->next = midb;
		midb->next = lastb;
		lastb->next = NULL;

		head->data = 1;
		mid->data = 2;
		last->data = 3;
        headb->data = 4;
		midb->data = 5;
		lastb->data = 6;

        ft_printf("Before: %d\n", head->data);
        ft_printf("Before: %d\n", headb->data);
        push_b(head, headb);
        ft_printf("After: %d\n", head->data);
        ft_printf("After: %d\n", headb->data);

}