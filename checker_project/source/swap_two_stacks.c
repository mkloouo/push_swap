/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_two_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 14:42:48 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 14:49:47 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

void    swap_two_stacks(t_stack *stack_a, t_stack *stack_b)
{
    ft_stack_swap_top(stack_a);
    ft_stack_swap_top(stack_b);
}
