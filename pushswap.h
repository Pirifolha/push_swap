/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misousa <misousa@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:47:57 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/01/21 20:35:22 by misousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

typedef struct s_lst
{
	int			data;
	struct s_lst	*next;
}					lst;

void	swap_a(lst **top_a);
void	swap_b(lst **top_b);
void	swap_both(lst **top_a, lst **top_b);
void	push_b(lst **top_a, lst **top_b);
void	push_a(lst **top_a, lst **top_b);
void	rotate_b(lst **top_b);
void	rotate_a(lst **top_a);
void	rotate_both(lst **top_a, lst **top_b);
void	rrotate_a(lst **top_a);
void	rrotate_b(lst **top_b);
void	rrotate_both(lst **top_a, lst **top_b);
int is_multnbr(char **argv);
int is_nbr(char **argv);

#endif