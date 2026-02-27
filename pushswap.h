/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:47:57 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/02/27 17:41:23 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

typedef struct s_lst
{
	int				data;
	int				index;
	struct s_lst	*next;
}					t_lst;

void				swap_a(t_lst **top_a);
void				swap_b(t_lst **top_b);
void				swap_both(t_lst **top_a, t_lst **top_b);
void				push_b(t_lst **top_a, t_lst **top_b);
void				push_a(t_lst **top_a, t_lst **top_b);
void				rotate_b(t_lst **top_b);
void				rotate_a(t_lst **top_a);
void				rotate_both(t_lst **top_a, t_lst **top_b);
void				rrotate_a(t_lst **top_a);
void				rrotate_b(t_lst **top_b);
void				rrotate_both(t_lst **top_a, t_lst **top_b);
int					is_nbr(char *temp);
int					*parser_check(int argc, char **argv);
void				radix_sort(t_lst **top_a, t_lst **top_b);
void				sort_three(t_lst **top_a);
void				sort_two(t_lst **top_a);
void				sort_four(t_lst **top_a, t_lst **top_b);
void				sort_five(t_lst **top_a, t_lst **top_b);
void				free_mem(char **result);
void				bubble_sort(int *temp, int size);
void				add_back(t_lst **top_a, t_lst *new);
int					invalid_and_count(int argc, char **argv);
t_lst				*new_node(int value);

#endif