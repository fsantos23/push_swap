/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:21:26 by fsantos2          #+#    #+#             */
/*   Updated: 2023/07/04 15:50:52 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

static void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	while (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

static t_list	*ft_addback(long value)
{
	t_list	*newlst;

	newlst = malloc(sizeof(t_list));
	if (newlst == NULL)
	{
		free(newlst);
		return (NULL);
	}
	newlst->num = value;
	newlst->next = NULL;
	return (newlst);
}

void	create_list(int argc, char **argv, t_list **stack)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_lstadd_back(stack, ft_addback(ft_atoi(argv[i])));
		i++;
	}
}

t_list	*create_stack(int argc, char **argv)
{
	int		i;
	t_list	*node;
	t_list	*start;

	start = NULL;
	i = 1;
	while (i < argc)
	{
		node = ft_addback(ft_atoi(argv[i]));
		if (!node)
			free(node);
		if (start == NULL)
			start = node;
		else
			ft_lstadd_back(&start, node);
		i++;
	}
	return (start);
}
