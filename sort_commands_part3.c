/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_commands_part3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 08:33:43 by acroisie          #+#    #+#             */
/*   Updated: 2021/12/16 18:05:44 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_all(t_stack *a, t_stack *b)
{
	ft_reverse_rotate_a(a);
	ft_reverse_rotate_b(b);
	write(1, "rrr", 3);
}
