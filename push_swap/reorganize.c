/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reorganize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:54:16 by fsantos2          #+#    #+#             */
/*   Updated: 2023/07/04 18:18:49 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reorganize(t_list **a, int size_list)
{
	int	smaller;
	int	index;

	smaller = find_smaller(a);
	index = get_index((*a), smaller);
	while ((*a)->num != smaller)
	{
		if (index > size_list / 2)
			ft_rra(a);
		else
			ft_ra(a);
	}
}

int  in_order(t_list *a)
{
  int i;
  t_list *current;
  
  i = 0;
  current = a;
  while(current->next)
  {
    if(current->num > current->next->num)
      return -1;
    current = current->next;
  }
  return 0;
}