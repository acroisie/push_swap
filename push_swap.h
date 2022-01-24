/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 14:19:11 by acroisie          #+#    #+#             */
/*   Updated: 2022/01/24 10:00:09 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"
#include <stdio.h> //To delete

typedef struct s_stack
{
	int	*stack;
	int	top_stack;
}t_stack;

typedef struct s_index
{
	int	*index;
	int	min_value;
	int	max_value;
	int	size;
	int	median;
}t_index;

typedef struct s_chunck
{
	int	i;
	int	j;
	int	k;
	int	min;
	int	max;
}t_chunck;

void	ft_init_stack(t_stack *a, t_stack *b, int size);
void	ft_swap_a(t_stack *a);
void	ft_super_swap(t_stack *a, t_stack *b);
void	ft_push_a(t_stack *a, t_stack *b);
void	ft_push_b(t_stack *a, t_stack *b);
void	ft_rotate_a(t_stack *a);
void	ft_rotate_b(t_stack *b);
void	ft_reverse_rotate_a(t_stack *a);
void	ft_reverse_rotate_b(t_stack *b);
int		ft_display_error(void);
void	ft_arg_parse_and_fill(t_stack *a, t_stack *b, int argc, char **argv);
void	ft_init_and_fill_stack(t_stack *a, t_stack *b, int size, char **tab);
int		ft_errors_check(char **tab);
void	ft_check_is_digit(char **tab);
void	ft_check_duplicate(char **tab);
void	ft_check_limits(char *nb);
char	*ft_join_args(char **argv, int argc);
void	ft_push_swap(t_stack *a, t_stack *b);
int		ft_min_value(t_stack *a);
int		ft_max_value(t_stack *a);
void	ft_init_index(t_index *index);
int		ft_abs(int value);
void	ft_range(t_index *index);
void	ft_search_position(t_stack *a, t_index *index);
void	ft_sort(t_stack *a, t_stack *b, t_index index);
void	ft_median(t_index *index, int quotient, int divider);
void	ft_push_smaller(t_stack *a, t_stack *b, t_index index);
void	ft_push_greater(t_stack *a, t_stack *b, t_index index);
void	ft_return_from_chunk(t_stack *a, t_stack *b);
void	ft_chunck_init(t_chunck *chunck, t_stack *b);
void	ft_smart_move(t_stack *a, int value);
void	ft_sort_hundred(t_stack *a, t_stack *b, t_index index);
void	ft_sort_fives_hundred(t_stack *a, t_stack *b, t_index index);
void	ft_push_between(t_stack *a, t_stack *b, t_index index, int last_median);

#endif