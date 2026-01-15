/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:35:04 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/01/15 17:01:17 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

void	swap_a(lst **top_a)
{
	lst	*head;
	lst	*tmp;

	if (*top_a || (*top_a)->next)
	{
		head = *top_a;
		*top_a = (*top_a)->next;
		tmp = (*top_a)->next;
		(*top_a)->next = head;
		head->next = tmp;
		ft_printf("sa\n");
	}
}

void	swap_b(lst **top_b)
{
	lst	*head;
	lst	*tmp;

	if (*top_b || (*top_b)->next)
	{
		head = *top_b;
		*top_b = (*top_b)->next;
		tmp = (*top_b)->next;
		(*top_b)->next = head;
		head->next = tmp;
		ft_printf("sb\n");
	}
}

void	swap_both(lst **top_a, lst **top_b)
{
	swap_a(*&top_a);
	swap_b(*&top_b);
	ft_printf("ss\n");
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

	swap_both(&head, &headb);
	while (head)
	{
		ft_printf("new_Top_a: %d\n", head->data);
		head = head->next;
	}
	while (headb)
	{
		ft_printf("new_Top_b: %d\n", headb->data);
		headb = headb->next;
	}
	
	
} */