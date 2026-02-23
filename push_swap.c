/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:50:08 by misousa           #+#    #+#             */
/*   Updated: 2026/02/18 18:39:58 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	int *res;

	if (argc > 0)
	{
		res = parser_check(argc, argv);
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
        headb->next = mid;
		midb->next = last;
		lastb->next = NULL;

		head->data = res[0];
		mid->data = res[1];
		last->data = res[2];
        headb->data = res[0];
		midb->data = res[1];
		lastb->data = res[2];

		while (head)
        {
            ft_printf("Before sort: %i\n", head->data);
            head = head->next;
        }

        sort_three(&headb);
        
	}
}