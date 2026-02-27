/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:45:47 by misousa           #+#    #+#             */
/*   Updated: 2026/02/27 17:41:15 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

int	invalid_and_count(int argc, char **argv)
{
	int		i;
	int		j;
	int		count;
	char	**temp;

	i = 1;
	count = 0;
	while (i < argc)
	{
		j = 0;
		temp = ft_split(argv[i], ' ');
		if (!temp)
			return (ft_printf("Error\n"), 0);
		while (temp[j])
		{
			if (is_nbr(temp[j++]))
				count++;
			else
				return (free_mem(temp), ft_printf("Error\n"), 0);
		}
		free_mem(temp);
		i++;
	}
	return (count);
}

int	is_nbr(char *temp)
{
	int	i;

	i = 0;
	if (temp[i] == '+' || temp[i] == '-')
		i++;
	if (temp[i] == 0)
		return (0);
	while (temp[i])
	{
		if (!ft_isdigit(temp[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	repeatn_and_minmax(int count, int *res)
{
	int	i;
	int	j;

	i = 0;
	while (i < count)
	{
		j = i + 1;
		while (j < count)
		{
			if (res[i] == res[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	convert(int argc, char **argv, int *res)
{
	int		i;
	int		j;
	int		k;
	char	**temp;
	long	nb;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		temp = ft_split(argv[i], ' ');
		if (!temp)
			return (ft_printf("Error\n"), 0);
		while (temp[j])
		{
			nb = ft_atol(temp[j]);
			if (nb > INT_MAX || nb < INT_MIN)
				return (free_mem(temp), ft_printf("Error\n"), 0);
			res[k++] = ft_atol(temp[j++]);
		}
		free_mem(temp);
		i++;
	}
	return (1);
}

int	*parser_check(int argc, char **argv)
{
	int	i;
	int	count;
	int	*res;

	count = invalid_and_count(argc, argv);
	if (count == 0)
		return (0);
	res = malloc(count * sizeof(int));
	if (!res)
		return (ft_printf("Error\n"), NULL);
	i = convert(argc, argv, res);
	if (!i)
		return (free(res), NULL);
	if (!repeatn_and_minmax(count, res))
		return (free(res), ft_printf("Error\n"), NULL);
	return (res);
}
