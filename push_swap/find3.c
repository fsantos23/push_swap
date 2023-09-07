/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:02:00 by fsantos2          #+#    #+#             */
/*   Updated: 2023/07/04 17:02:56 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_to_top1(t_move num, t_move neighbour, t_list **b, t_list **a)
{
	int	size_a;
	int	size_b;
	int	same_moves;

	size_a = size_list(*a);
	size_b = size_list(*b);
	if (num.b < num.a)
		same_moves = num.b;
	else
		same_moves = num.a;
	if (same_moves > 0 && (neighbour.index > size_a / 2) == (num.index > size_b
			/ 2))
	{
		while (--same_moves > 0)
			rrr_or_rr(a, b, size_b, num);
		num.index = get_index(*b, num.num);
		neighbour.index = get_index(*a, neighbour.num);
	}
	while ((*b)->num != num.num)
		rrb_or_rb(b, num, size_b);
	if (neighbour.to_top == false)
		rra_or_ra(neighbour, size_a, a);
	else
		rra_or_ra(neighbour, size_a, a);
	free(num.neighbour);
}

void	rrr_or_rr(t_list **a, t_list **b, int size_b, t_move num)
{
	if (num.index > size_b / 2)
		ft_rrr(a, b);
	else
		ft_rr(a, b);
}

void	rrb_or_rb(t_list **b, t_move num, int size_b)
{
	if (num.index > size_b / 2)
		ft_rrb(b);
	else
		ft_rb(b);
}

void	rra_or_ra(t_move neighbour, int size_a, t_list **a)
{
	if (neighbour.to_top == false)
	{
		while (neighbour.node->next)
		{
			if (neighbour.index > size_a / 2)
				ft_rra(a);
			else
				ft_ra(a);
		}
	}
	else
	{
		while ((*a)->num != neighbour.num)
		{
			if (neighbour.index > size_a / 2)
				ft_rra(a);
			else
				ft_ra(a);
		}
	}
}

void	move_to_top2(t_list **a, t_list **b)
{
	t_move	num;
	t_move	neighbour;

	num = number_moves((*a), (*b));
	neighbour = *num.neighbour;
	move_to_top1(num, neighbour, b, a);
}
