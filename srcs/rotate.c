/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:40:37 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/02/27 16:12:14 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

void	rotate_a(t_lst **top_a)
{
	t_lst	*last;
	t_lst	*head;

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
	ft_printf("ra\n");
}

void	rotate_b(t_lst **top_b)
{
	t_lst	*last;
	t_lst	*head;

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

void	rotate_both(t_lst **top_a, t_lst **top_b)
{
	rotate_a(&*top_a);
	rotate_b(&*top_b);
}
