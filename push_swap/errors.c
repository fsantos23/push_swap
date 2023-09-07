/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:00:18 by fsantos2          #+#    #+#             */
/*   Updated: 2023/07/04 15:50:57 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_duplicate(int argc, char **argv)
{
	int	i;
	int	a;

	i = 1;
	while (i < argc - 1)
	{
		a = i + 1;
		while (a < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[a]))
				return (-1);
			a++;
		}
		i++;
	}
	return (0);
}

int	is_all_num(int argc, char **argv)
{
	int	i;
	int	a;

	i = 1;
	while (i < argc)
	{
		a = 0;
		if (!argv[i][a])
			return (-1);
		while (argv[i][a])
		{
			if ((argv[i][a] == '-' || argv[i][a] == '+') && a == 0)
				a++;
			if (argv[i][a] >= '0' && argv[i][a] <= '9')
				a++;
			else
				return (-1);
		}
		i++;
	}
	return (0);
}

int	higher_smaller_int(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_atoi(argv[i]) >= INT_MAX || ft_atoi(argv[i]) <= INT_MIN)
			return (-1);
		i++;
	}
	return (0);
}

int	check_error(int argc, char **argv)
{
	if (is_all_num(argc, argv) == -1 || find_duplicate(argc, argv) == -1
		|| higher_smaller_int(argc, argv) == -1)
	{
		return (-1);
	}
	return (0);
}
