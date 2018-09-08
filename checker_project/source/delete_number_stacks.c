/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_number_stacks.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 20:51:34 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 20:51:48 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

void	delete_number_stacks(t_stack *stack_a, t_stack *stack_b)
{
	ft_delete_stack(stack_a, ft_common_deleter);
	ft_delete_stack(stack_b, ft_common_deleter);
}
