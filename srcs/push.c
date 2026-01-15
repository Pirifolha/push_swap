/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:30:29 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/01/15 17:10:07 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

void	push_b(lst **top_a, lst **top_b)
{
	lst	*new_head_b;
	lst	*new_head_a;

	if (*top_a != NULL)
	{
		new_head_b = *top_a;
		new_head_a = (*top_a)->next;
		new_head_b->next = *top_b;
		*top_b = new_head_b;
		*top_a = new_head_a;
		ft_printf("pb\n");
	}
}

void	push_a(lst **top_a, lst **top_b)
{
	lst	*new_head_b;
	lst	*new_head_a;

	if (*top_b != NULL)
	{
		new_head_a = *top_b;
		new_head_b = (*top_b)->next;
		new_head_a->next = *top_a;
		*top_a = new_head_a;
		*top_b = new_head_b;
		ft_printf("pa\n");
	}
}

/* int	main(void)
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

	ft_printf("Top_a: %d\n", head->data);
	ft_printf("Top_b: %d\n", headb->data);
	push_a(&head, &headb);
	ft_printf("new_Top_a: %d\n", head->data);
	ft_printf("new_Top_b: %d\n", headb->data);
} */