/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelsousa <miguelsousa@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 14:36:41 by miguelsousa       #+#    #+#             */
/*   Updated: 2025/12/27 13:47:30 by miguelsousa      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/* int	main(void)
{
	t_list	*first = NULL;
	t_list	*second = NULL;
	t_list	*third = NULL;
	t_list *res = NULL;
	int f = 1;
	int s = 2;
	int t = 3;

	first = (t_list *)malloc(sizeof(t_list));
	second = (t_list *)malloc(sizeof(t_list));
	third = (t_list *)malloc(sizeof(t_list));
	res = (t_list *)malloc(sizeof(t_list));

	first->content = &f;
	second->content = &s;
	third->content = &t;

	first->next = second;
	second->next = third;
	third->next = NULL;
	res = ft_lstlast(first);

	printf("%d\n", *(int *)res->content);
} */