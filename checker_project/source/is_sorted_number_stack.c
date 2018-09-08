/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_number_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 20:56:03 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 21:00:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

t_bool				is_sorted_number_stack(t_stack *stack)
{
	t_bool			first_element;
	int				number;
	int				prev_number;
	t_stack_element	*element;

	first_element = TRUE;
	element = stack->bottom;
	while (element != stack->bottom)
	{
		prev_number = number;
		number = *((int*)element->data);
		if (first_element)
		{
			first_element = FALSE;
			continue ;
		}
		if (number >= prev_number)
		{
			return (FALSE);
		}
		element = element->next;
	}
	return (TRUE);
}
