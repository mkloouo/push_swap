/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_number_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 20:56:03 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 16:18:51 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

t_bool				is_sorted_number_stack(t_stack *stack)
{
	int				number;
	int				prev_number;
	t_stack_element	*element;

	if (stack->top)
	{
		prev_number = *((int*)stack->top->data);
		element = stack->top->prev;
		while (element && element != stack->top)
		{
			number = *((int*)element->data);
			if (number <= prev_number)
				return (FALSE);
			element = element->prev;
			prev_number = number;
		}
		return (TRUE);
	}
	return (FALSE);
}
