/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:08:28 by fsantos2          #+#    #+#             */
/*   Updated: 2023/07/04 16:04:56 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	which_sort(t_list **a, t_list **b, int argc)
{
	if (argc == 3)
		sort_2(a);
	else if (argc == 4)
		sort_3(a);
	else if (argc == 5)
		sort_4(a, b);
	else if (argc == 6)
		sort_5(a, b);
	else if (argc > 6)
		sort_rest(a, b);
}
