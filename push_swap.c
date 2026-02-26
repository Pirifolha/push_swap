/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:50:08 by misousa           #+#    #+#             */
/*   Updated: 2026/02/25 19:03:26 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	int *res;

	if (argc > 1)
	{
		res = parser_check(argc, argv);
		lst *head = NULL;
		lst *sec = NULL;
		lst *mid = NULL;
        lst *slast = NULL;
		lst *last = NULL;
        lst **top_b = NULL;

		head = malloc(sizeof(lst));
		sec = malloc(sizeof(lst));
		mid = malloc(sizeof(lst));
        slast = malloc(sizeof(lst));
		last = malloc(sizeof(lst));
        top_b = malloc(sizeof(lst *));

		head->next = sec;
		sec->next = mid;
		mid->next = slast;
        slast->next = last;
		last->next = NULL;

		head->data = res[0];
		sec->data = res[1];
		mid->data = res[2];
		slast->data = res[3];
        last->data = res[4];

	/* 	lst *tmp = head;
        ft_printf("Before: ");
		while (tmp)
		{
			ft_printf("%i ", tmp->data);
			tmp = tmp->next;
		}
		ft_printf("\n"); */


		radix_sort(&head, top_b);

		/* tmp = head;
        ft_printf("After: ");
		while (tmp)
		{
			ft_printf("%i ", tmp->data);
			tmp = tmp->next;
		}
		ft_printf("\n"); */
	}
}