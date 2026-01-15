/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:40:37 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/01/15 17:12:27 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

void	rotate_a(lst **top_a)
{
	lst	*last;
	lst	*head;

	last = *top_a;
	*top_a = (*top_a)->next;
	head = *top_a;
	while ((*top_a))
	{
		if (!(*top_a)->next)
		{
			(*top_a)->next = last;
			last->next = NULL;
		}
		*top_a = (*top_a)->next;
	}
	*top_a = head;
    ft_printf("ra");
}
void	rotate_b(lst **top_b)
{
	lst	*last;
	lst	*head;

	last = *top_b;
	*top_b = (*top_b)->next;
	head = *top_b;
	while ((*top_b))
	{
		if (!(*top_b)->next)
		{
			(*top_b)->next = last;
			last->next = NULL;
		}
		*top_b = (*top_b)->next;
	}
	*top_b = head;
    ft_printf("rb");
}

void	rotate_both(lst **top_a, lst **top_b)
{
	rotate_a(&*top_a);
	rotate_b(&*top_b);
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

	rotate_both(&head, &headb);
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