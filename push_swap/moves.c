/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 16:51:58 by fsantos2          #+#    #+#             */
/*   Updated: 2023/07/04 17:03:02 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_move	number_moves(t_list *a, t_list *b)
{
	t_move	min;
	t_move	curr;
	t_move	best;
	int		i;
	int		size;

	i = 0;
	min.found = false;
	min.neighbour = NULL;
	size = size_list(b);
	while (b)
	{
		curr = (t_move){.index = i, .num = b->num, .b = i, .to_top = true,
			.found = true, .node = b};
		if (curr.b > size / 2)
			curr.b = size - i + 1;
		best = find_best_neighbour(a, b->num);
		curr.a = best.moves;
		curr.moves = curr.a + curr.b;
		if (!min.found || min.moves > curr.moves)
			min = something(min, curr, best);
		b = b->next;
		i++;
	}
	return (min);
}

t_move	something(t_move min, t_move curr, t_move best)
{
	free(min.neighbour);
	min = curr;
	min.neighbour = malloc(sizeof(t_move));
	*min.neighbour = best;
	return (min);
}

t_move	find_best_neighbour(t_list *stack, int num)
{
	t_move	min;
	t_move	max;

	min = find_neighbour_smallest(stack, num);
	max = find_neighbour_highest(stack, num);
	if (min.found == false)
		return (max);
	else if (max.found == false)
		return (min);
	else if (min.moves < max.moves)
		return (min);
	else if (max.moves < min.moves)
		return (max);
	return (max);
}
