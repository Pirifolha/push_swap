/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 22:14:03 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/02/18 18:45:42 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

void	sort_two(lst **top_a)
{
	if (*top_a > (*top_a)->next)
		swap_a(top_a);
}

void	sort_three(lst **top_a)
{
	lst *head;
	lst *middle;
	lst *last;

	head = *top_a;
	middle = head->next;
	last = middle->next;

	head->next = middle;
	middle->next = last;
	last->next = NULL;

	while (head->data > middle->data || middle->data > last->data)
	{
        ft_printf("%i\n", head->data);
		ft_printf("%i\n", middle->data);
		ft_printf("%i\n", last->data);
		if (head->data > middle->data)
			swap_a(&head);
		ft_printf("%i\n", head->data);
		ft_printf("%i\n", head->next->data);
		ft_printf("%i\n", last->data);
		if (middle->data > last->data)
			rrotate_a(&head);
	}
}