/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:47:57 by miguelsousa       #+#    #+#             */
/*   Updated: 2026/01/08 20:21:15 by miguelsousa      ###   ########.fr       */
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

lst	*swap_a(lst *top);
lst	*swap_b(lst *top);
void	swap_both(lst *top_a, lst *top_b);



#endif