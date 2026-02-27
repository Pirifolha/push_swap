/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 00:02:09 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/02/27 18:55:51 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

void	free_mem(char **result)
{
	int	i;

	i = 0;
	if (!result)
		return ;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

void	bubble_sort(int *temp, int size)
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

t_lst	*new_node(int value)
{
	t_lst	*node;

	node = malloc(sizeof(t_lst));
	if (!node)
		return (NULL);
	node->data = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	add_back(t_lst **top_a, t_lst *new)
{
	t_lst	*tmp;

	if (!new)
		return ;
	if (!*top_a)
	{
		*top_a = new;
		return ;
	}
	tmp = *top_a;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
