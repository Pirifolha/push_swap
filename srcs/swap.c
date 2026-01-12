/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:35:04 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/01/08 15:34:22 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

lst	*swap_a(lst *top)
{
	int	tmp;

	if (!top || top->next)
		return (top);
	tmp = 0;
	tmp = top->data;
	top->data = top->next->data;
	top->next->data = tmp;
	ft_printf("sa\n");
	return (top);
}

lst	*swap_b(lst *top)
{
	int	tmp;

	if (!top || top->next)
		return (top);
	tmp = 0;
	tmp = top->data;
	top->data = top->next->data;
	top->next->data = tmp;
	ft_printf("sb\n");
	return (top);
}

void	swap_both(lst *top_a, lst *top_b)
{
	swap_a(top_a);
	swap_b(top_b);
	ft_printf("ss\n");
}

/* int main ()
{

		lst *head = NULL;
		lst *mid = NULL;
		lst *mid2 = NULL;
		lst *last = NULL;

		head = malloc(sizeof(lst));
		mid = malloc(sizeof(lst));
		mid2 = malloc(sizeof(lst));
		last = malloc(sizeof(lst));

		head->next = mid;
		mid->next = mid2;
		mid2->next = last;
		last->next = NULL;

		head->data = 2;
		mid->data = 4;
		mid2->data = 3;
		last->data = 5;

		swap_a(head);

		while (head)
		{
			ft_printf("After swap: %d\n", head->data);
			head = head->next;
		}

} */