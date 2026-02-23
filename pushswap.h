/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:47:57 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/02/23 21:10:39 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

typedef struct s_lst
{
	int				data;
	struct s_lst	*next;
}					lst;

void				swap_a(lst **top_a);
void				swap_b(lst **top_b);
void				swap_both(lst **top_a, lst **top_b);
void				push_b(lst **top_a, lst **top_b);
void				push_a(lst **top_a, lst **top_b);
void				rotate_b(lst **top_b);
void				rotate_a(lst **top_a);
void				rotate_both(lst **top_a, lst **top_b);
void				rrotate_a(lst **top_a);
void				rrotate_b(lst **top_b);
void				rrotate_both(lst **top_a, lst **top_b);
int					is_multnbr(char **argv);
int					is_nbr(char *temp);
int					is_rep_nbr(char **argv);
int					*parser_check(int argc, char **argv);
void				sort_three(lst **top_a);
void				sort_two(lst **top_a);
void				sort_four(lst **top_a, lst **top_b);
void				sort_five(lst **top_a, lst **top_b);

#endif