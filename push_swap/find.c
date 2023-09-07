/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:17:01 by getout            #+#    #+#             */
/*   Updated: 2023/07/04 15:51:00 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_smaller(t_list **a)
{
	int		i;
	t_list	*current;

	i = (*a)->num;
	current = *a;
	while (current)
	{
		if (current->num < i)
			i = current->num;
		current = current->next;
	}
	return (i);
}

int	find_bigger(t_list **a)
{
	int		i;
	t_list	*current;

	i = (*a)->num;
	current = *a;
	while (current)
	{
		if (current->num > i)
			i = current->num;
		current = current->next;
	}
	return (i);
}

int	get_index(t_list *a, int num)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->num == num)
			return (i);
		i++;
		a = a->next;
	}
	return (-1);
}

int	size_list(t_list *a)
{
	int	i;

	i = 0;
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}

void	smallest_top(t_list **a, int size_list, int index)
{
	int	i;

	i = index;
	if (index + 1 <= (size_list / 2))
	{
		while (i > 0)
		{
			ft_ra(a);
			i--;
		}
	}
	else if (index + 1 > (size_list / 2))
	{
		while (i < size_list)
		{
			ft_rra(a);
			i++;
		}
	}
}
