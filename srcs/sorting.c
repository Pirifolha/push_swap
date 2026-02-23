/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 22:14:03 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/02/23 21:23:39 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

static void	find_n_sortmin(lst **top_a)
{
	lst	*head;
	lst	*next;

	head = (*top_a);
	next = (*top_a)->next;
	while (next)
	{
		if (head->data > next->data)
			head = next;
		next = next->next;
	}
	if (head->data == (*top_a)->next->data)
		swap_a(top_a);
	else if (head->data == (*top_a)->next->next->data)
	{
		rotate_a(top_a);
		swap_a(top_a);
	}
	else if (head->next == NULL)
		rrotate_a(top_a);
	else if (head->next->next == NULL)
	{
		rrotate_a(top_a);
		rrotate_a(top_a);
	}
}

void	sort_two(lst **top_a)
{
	if ((*top_a)->data > (*top_a)->next->data)
		swap_a(top_a);
}

void	sort_three(lst **top_a)
{
	if ((*top_a)->data > (*top_a)->next->data)
		swap_a(top_a);
	if (((*top_a)->next->data > (*top_a)->next->next->data))
		rrotate_a(top_a);
	if ((*top_a)->data > (*top_a)->next->data)
		swap_a(top_a);
}

void	sort_four(lst **top_a, lst **top_b)
{
	lst	*head;
	lst	*next;

	head = (*top_a);
	next = (*top_a)->next;
	while (next)
	{
		if (head->data > next->data)
			head = next;
		next = next->next;
	}
	if (head->data == (*top_a)->next->data)
		swap_a(top_a);
	else if (head->next == NULL)
		rrotate_a(top_a);
	else if (head->data == (*top_a)->next->next->data)
	{
		rrotate_a(top_a);
		rrotate_a(top_a);
	}
	push_b(top_a, top_b);
	sort_three(top_a);
	push_a(top_a, top_b);
}

void	sort_five(lst **top_a, lst **top_b)
{
	find_n_sortmin(top_a);
	push_b(top_a, top_b);
	find_n_sortmin(top_a);
	push_b(top_a, top_b);
	sort_three(top_a);
	push_a(top_a, top_b);
	push_a(top_a, top_b);
}
