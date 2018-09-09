/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_two_stacks.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 14:42:48 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 14:44:48 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

void    rotate_two_stacks(t_stack *stack_a, t_stack *stack_b)
{
    ft_rotate_stack(stack_a);
    ft_rotate_stack(stack_b);
}
