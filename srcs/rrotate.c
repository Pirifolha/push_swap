/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 17:12:39 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/02/27 16:12:27 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

void	rrotate_a(t_lst **top_a)
{
	t_lst	*head;
	t_lst	*second;
	t_lst	*last;

	second = *top_a;
	while ((*top_a)->next->next)
		*top_a = (*top_a)->next;
	last = (*top_a);
	*top_a = (*top_a)->next;
	head = *top_a;
	(*top_a)->next = second;
	last->next = NULL;
	*top_a = head;
	ft_printf("rra\n");
}

void	rrotate_b(t_lst **top_b)
{
	t_lst	*head;
	t_lst	*second;
	t_lst	*last;

	second = *top_b;
	while ((*top_b)->next->next)
		*top_b = (*top_b)->next;
	last = (*top_b);
	*top_b = (*top_b)->next;
	head = *top_b;
	(*top_b)->next = second;
	last->next = NULL;
	*top_b = head;
	ft_printf("rrb\n");
}

void	rrotate_both(t_lst **top_a, t_lst **top_b)
{
	rrotate_a(*&top_a);
	rrotate_b(*&top_b);
}
