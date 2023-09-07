/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 09:46:20 by fsantos2          #+#    #+#             */
/*   Updated: 2023/07/04 18:18:27 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_list *list)
{
	t_list	*temp;

	while (list)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	if (argc > 1)
	{
		if (check_error(argc, argv) == -1)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		a = create_stack(argc, argv);
        if(in_order(a) == -1)
        {
		    which_sort(&a, &b, argc);
        }
		free_list(a);
	}
}
