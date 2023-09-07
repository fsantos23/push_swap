/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:16:45 by fsantos2          #+#    #+#             */
/*   Updated: 2023/07/04 17:05:15 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_list **a)
{
	if ((*a)->num > (*a)->next->num)
		ft_sa(a);
}

void	sort_3(t_list **a)
{
	if (((*a)->num > (*a)->next->num)
		&& ((*a)->next->num > (*a)->next->next->num))
	{
		ft_sa(a);
		ft_rra(a);
	}
	else if (((*a)->num < (*a)->next->next->num) && \
		((*a)->next->num > (*a)->next->next->num) && \
		((*a)->num < (*a)->next->num))
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if (((*a)->num > (*a)->next->num) && \
		((*a)->num > (*a)->next->next->num))
		ft_ra(a);
	else if (((*a)->num < (*a)->next->num) && \
		((*a)->next->num > (*a)->next->next->num))
		ft_rra(a);
	else if ((*a)->num > (*a)->next->num && \
		(*a)->next->num < (*a)->next->next->num)
		ft_sa(a);
}

void	sort_4(t_list **a, t_list **b)
{
	smallest_top(a, size_list(*a), get_index((*a), find_smaller(a)));
	ft_pb(a, b);
	sort_3(a);
	ft_pa(a, b);
}

void	sort_5(t_list **a, t_list **b)
{
	smallest_top(a, size_list(*a), get_index((*a), find_smaller(a)));
	ft_pb(a, b);
	smallest_top(a, size_list(*a), get_index((*a), find_smaller(a)));
	ft_pb(a, b);
	sort_3(a);
	ft_pa(a, b);
	ft_pa(a, b);
}

void	sort_rest(t_list **a, t_list **b)
{
	int	size;

	size = size_list(*a);
	while ((size - 5) > 0)
	{
		ft_pb(a, b);
		size--;
	}
	sort_5(a, b);
	while (*b)
	{
		move_to_top2(a, b);
		ft_pa(a, b);
	}
	reorganize(a, size_list(*a));
}
