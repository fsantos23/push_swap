/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:09:10 by fsantos2          #+#    #+#             */
/*   Updated: 2023/07/04 16:05:16 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **a)
{
	t_list	*temp;

	temp = (*a)->next;
	(*a)->next = (*a)->next->next;
	temp->next = *a;
	*a = temp;
	write(1, "sa\n", 3);
}

void	ft_sb(t_list **b)
{
	t_list	*temp;

	temp = (*b)->next;
	(*b)->next = (*b)->next->next;
	temp->next = *b;
	*b = temp;
	write(1, "sb\n", 3);
}

void	ft_ss(t_list **a, t_list **b)
{
	ft_sa(a);
	ft_sb(b);
	write(1, "ss\n", 3);
}

void	ft_pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if (*b == NULL)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = *a;
	*a = temp;
	write(1, "pa\n", 3);
}

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (*a == NULL)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = *b;
	*b = temp;
	write(1, "pb\n", 3);
}
