/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_two_stacks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 14:53:18 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 15:42:56 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

void				print_two_stacks(t_stack *stack_a, t_stack *stack_b)
{
	t_stack_element	*a_el;
	t_stack_element	*b_el;
	size_t	i;

	if (stack_a->size > stack_b->size)
		i = stack_a->size;
	else
		i = stack_b->size;
	a_el = stack_a->top;
	b_el = stack_b->top;
	ft_printf("%-15s %-15s\n", "-", "-");
	while (i)
	{
		if (i <= stack_a->size)
		{
			ft_printf("%-15d ", *((int*)a_el->data));
			a_el = a_el->prev;
		}
		else
			ft_printf("%-15s ", "");
		if (i <= stack_b->size)
		{
			ft_printf("%-15d\n", *((int*)b_el->data));
			b_el = b_el->prev;
		}
		else
			ft_printf("\n");
		--i;
	}
	ft_printf("%-15s %-15s\n%-15s %-15s\n", "-", "-", "a", "b");
}
