/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:25:16 by misousa           #+#    #+#             */
/*   Updated: 2025/12/26 12:23:03 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *n1;

	n1 = (t_list *)malloc(sizeof(t_list));
	if (n1 == NULL)
		return (NULL);

	n1->content = content;
	n1->next = NULL;
	return (n1);
}