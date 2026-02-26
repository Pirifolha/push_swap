/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radixsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 17:21:20 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/02/26 23:42:44 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

static int	array_size(lst **top_a)
{
	lst	*tmp;
	int	i;

	i = 0;
	tmp = (*top_a);
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

static void	fill(int *temp, lst **top_a)
{
	lst	*tmp;
	int	i;

	tmp = (*top_a);
	i = 0;
	while (tmp)
	{
		temp[i++] = tmp->data;
		tmp = tmp->next;
	}
}

static void	bubble_sort(int *temp, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i++ < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (temp[j] > temp[j + 1])
			{
				k = temp[j];
				temp[j] = temp[j + 1];
				temp[j + 1] = k;
			}
			j++;
		}
	}
}

void	fill_index(lst **top_a, int *temp)
{
	int	i;
	int	j;
	lst	*tmp;

	tmp = (*top_a);
	while (tmp)
	{
		i = 0;
		while (temp[i] != tmp->data)
			i++;
		if (temp[i] == tmp->data)
			tmp->index = i;
		tmp = tmp->next;
	}
	free(temp);
}

void	sort(lst **top_a, lst **top_b, int max, int size)
{
	int	max_bits;
	int	i;
	int	bit;

	max_bits = 0;
	bit = 0;
	while ((max >> max_bits) != 0)
		max_bits++;
	while (bit < max_bits)
	{
		i = 0;
		while (i < size)
		{
			if (((*top_a)->index >> bit) & 1)
				rotate_a(top_a);
			else
				push_b(top_a, top_b);
			i++;
		}
		while ((*top_b))
			push_a(top_a, top_b);
		bit++;
	}
}

void	radix_sort(lst **top_a, lst **top_b)
{
	int	*temp;
	int	size;
	int	max;

	size = array_size(top_a);
	max = size - 1;
	temp = malloc(sizeof(int) * size);
	if (!temp)
		return ;
	fill(temp, top_a);
	bubble_sort(temp, size);
	fill_index(top_a, temp);
    sort(top_a, top_b, max, size);
}
