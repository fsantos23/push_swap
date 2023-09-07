/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:48:23 by getout            #+#    #+#             */
/*   Updated: 2023/07/04 15:54:54 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_move	find_neighbour_highest(t_list *a, int num_b)
{
	t_move	max;
	t_move	curr;
	int		i;
	int		size;

	i = 0;
	max.found = false;
	max.num = 0;
	size = size_list(a);
	while (a)
	{
		curr = (t_move){.index = i, .num = a->num, .moves = i, .to_top = true,
			.found = true, .node = a};
		if (curr.index > size / 2)
			curr.moves = size - i + 1;
		if ((max.num > a->num && a->num > num_b) || (max.found == false
				&& a->num > num_b))
			max = curr;
		a = a->next;
		i++;
	}
	return (max);
}

t_move	find_neighbour_smallest(t_list *a, int num_b)
{
	t_move	min;
	t_move	curr;
	int		i;
	int		size;

	i = 0;
	min.found = false;
	min.num = 0;
	size = size_list(a);
	while (a)
	{
		curr = (t_move){.index = i, .num = a->num, .moves = i + 1,
			.to_top = false, .found = true, .node = a};
		if (curr.index > size / 2)
			curr.moves = size - i;
		if ((min.num < a->num && a->num < num_b) || (min.found == false
				&& a->num < num_b))
			min = curr;
		a = a->next;
		i++;
	}
	return (min);
}
