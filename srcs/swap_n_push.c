/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_n_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:35:04 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/02/27 16:12:54 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

void	push_b(t_lst **top_a, t_lst **top_b)
{
	t_lst	*new_head_b;
	t_lst	*new_head_a;

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

void	push_a(t_lst **top_a, t_lst **top_b)
{
	t_lst	*new_head_b;
	t_lst	*new_head_a;

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

void	swap_a(t_lst **top_a)
{
	t_lst	*head;
	t_lst	*tmp;

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

void	swap_b(t_lst **top_b)
{
	t_lst	*head;
	t_lst	*tmp;

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

void	swap_both(t_lst **top_a, t_lst **top_b)
{
	swap_a(*&top_a);
	swap_b(*&top_b);
	ft_printf("ss\n");
}
