/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:04:30 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 15:01:25 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

void		execute_command(t_stack_cmd cmd, t_stack *stack_a, t_stack *stack_b)
{
	if (cmd.spec.type == ONE_STACK)
	{
		if (cmd.spec.conv == JUST_A)
			cmd.func.os(stack_a);
		else
			cmd.func.os(stack_b);
	}
	else
	{
		if (cmd.spec.conv == A_B)
			cmd.func.ts(stack_a, stack_b);
		else
			cmd.func.ts(stack_b, stack_a);
	}
}
