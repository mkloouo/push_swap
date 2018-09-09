/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_from_to.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 14:55:38 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 15:15:59 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

void				push_from_to(t_stack *stack_a, t_stack *stack_b)
{
	t_stack_element	*element;

	if ((element = ft_pop_stack(stack_a)))
	{
		ft_push_stack(stack_b, element);
	}
}
