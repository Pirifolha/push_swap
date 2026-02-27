/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:50:08 by misousa           #+#    #+#             */
/*   Updated: 2026/02/27 18:44:52 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	create_list(t_lst **top_a, int *res, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		add_back(top_a, new_node(res[i]));
		i++;
	}
}

static int	is_in_order(t_lst **top_a)
{
	t_lst	*tmp;

	tmp = (*top_a);
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

static int	choose_algorithm(t_lst **top_a, t_lst **top_b, int size)
{
	if (is_in_order(top_a))
		return (0);
	if (size == 2)
		sort_two(top_a);
	else if (size == 3)
		sort_three(top_a);
	else if (size == 4)
		sort_four(top_a, top_b);
	else if (size <= 5)
		sort_five(top_a, top_b);
	else
		radix_sort(top_a, top_b);
	return (0);
}

static void	free_stack(t_lst **stack)
{
	t_lst	*tmp;
	t_lst	*next;

	if (!stack || !*stack)
		return ;
	tmp = *stack;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*stack = NULL;
}

int	main(int argc, char **argv)
{
	int		*res;
	int		size;
	t_lst	*top_a;
	t_lst	*top_b;

	top_a = NULL;
	top_b = NULL;
	if (argc > 1)
	{
		res = parser_check(argc, argv);
		if (!res)
			return (1);
		size = invalid_and_count(argc, argv);
		create_list(&top_a, res, size);
		free(res);
		choose_algorithm(&top_a, &top_b, size);
		free_stack(&top_a);
		free_stack(&top_b);
	}
}
