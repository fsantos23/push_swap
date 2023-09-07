/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 17:52:49 by fsantos2          #+#    #+#             */
/*   Updated: 2023/07/04 15:52:13 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_list **stack)
{
	t_list	*temp;

	temp = *stack;
	while ((*stack)->next)
		*stack = (*stack)->next;
	(*stack)->next = temp;
	while (temp->next != *stack)
		temp = temp->next;
	temp->next = NULL;
}

void	ft_rra(t_list **a)
{
	ft_reverse_rotate(a);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_list **b)
{
	ft_reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_list **a, t_list **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	write(1, "rrr\n", 4);
}
