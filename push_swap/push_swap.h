/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantos2 <fsantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 02:40:39 by fsantos2          #+#    #+#             */
/*   Updated: 2023/07/04 18:17:23 by fsantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				num;
	struct s_list	*next;
}					t_list;

typedef struct s_move
{
	bool			found;
	bool			to_top;

	int				num;
	int				moves;
	int				index;

	int				a;
	int				b;

	t_list			*node;
	struct s_move	*neighbour;
}					t_move;

t_move				number_moves(t_list *a, t_list *b);
t_move				find_best_neighbour(t_list *stack, int num);
long				ft_atoi(char *str);
void				create_list(int argc, char **argv, t_list **stack);
t_list				*create_stack(int argc, char **argv);
int					check_error(int argc, char **argv);
int					find_smaller(t_list **a);
int					find_bigger(t_list **a);
int					get_index(t_list *a, int num);
int					size_list(t_list *a);
void				smallest_top(t_list **a, int size_list, int index);
t_move				find_neighbour_highest(t_list *a, int num_b);
t_move				find_neighbour_smallest(t_list *a, int num_b);
void				move_to_top2(t_list **a, t_list **b);
void				ft_sa(t_list **a);
void				ft_sb(t_list **b);
void				ft_ss(t_list **a, t_list **b);
void				ft_pa(t_list **a, t_list **b);
void				ft_pb(t_list **a, t_list **b);
void				ft_ra(t_list **a);
void				ft_rb(t_list **b);
void				ft_reverse_rotate(t_list **stack);
void				ft_rotate(t_list **stack);
void				ft_rr(t_list **a, t_list **b);
void				ft_rra(t_list **a);
void				ft_rrb(t_list **b);
void				ft_rrr(t_list **a, t_list **b);
void				sort_2(t_list **a);
void				sort_3(t_list **a);
void				sort_4(t_list **a, t_list **b);
void				sort_5(t_list **a, t_list **b);
void				sort_rest(t_list **a, t_list **b);
void				which_sort(t_list **a, t_list **b, int argc);
void				reorganize(t_list **a, int size_list);
int					higher_smaller_int(int argc, char **argv);
int					is_all_num(int argc, char **argv);
int					find_duplicate(int argc, char **argv);
void				move_to_top1(t_move num, t_move neighbour, t_list **b,
						t_list **a);
void				rrb_or_rb(t_list **b, t_move num, int size_b);
void				rra_or_ra(t_move neighbour, int size_a, t_list **a);
t_move				something(t_move min, t_move curr, t_move best);
void				rrr_or_rr(t_list **a, t_list **b, int size_b, t_move num);
int					in_order(t_list *a);

#endif
