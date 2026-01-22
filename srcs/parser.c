/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:45:47 by misousa           #+#    #+#             */
/*   Updated: 2026/01/22 22:00:37 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./pushswap.h"

// check for more than 1 num

int	is_multnbr(char **argv)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	count = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			while (ft_isdigit(argv[i][j]))
			{
				if (ft_isdigit(argv[i][j]) && (argv[i][j + 1] == 32 || argv[i][j
						+ 1] == 0))
					count++;
				j++;
			}
			if (argv[i][j] == 0)
				break ;
			j++;
		}
		i++;
	}
	return (count);
}
// check for alpha char

int	is_nbr(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isalpha(argv[i][j]) == 1)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
//doesnt work for for 0x cases

int	is_rep_nbr(char **argv)
{
	int	i;
	int	j;
	int	k;

	j = 1;
	while (argv[j])
	{
		i = j + 1;
		k = 0;
		while (argv[i])
		{
			while (argv[j][k] == argv[i][k] && (argv[j][k] && argv[i][k]))
				k++;
			if (argv[j][k] == argv[i][k])
				return (0);
			i++;
		}
		j++;
	}
	return (1);
}
