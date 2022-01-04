/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acroisie <acroisie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 08:06:25 by acroisie          #+#    #+#             */
/*   Updated: 2021/12/29 16:27:32 by acroisie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack *a, t_stack *b)
{
	int	sort_index[10];
	int	i;

	if (a && b)
		printf("Content le programme\n");
	ft_bzero((void *)sort_index, 10);
	i = 0;
	while (i < 10) //To delete
	{
		printf("%d\n", sort_index[i]);
		i++;
	}
}
