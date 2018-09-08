/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:04:30 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 21:16:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

static void	rotate(char const *command, t_stack *stack_a, t_stack *stack_b)
{
	if (command[1] == 'a')
		ft_rotate_stack(stack_a);
	else if (command[1] == 'b')
		ft_rotate_stack(stack_b);
	else if (command[1] == 'r' && command[2] == 0)
	{
		ft_rotate_stack(stack_a);
		ft_rotate_stack(stack_b);
	}
	else if (command[2] == 'a')
		ft_rrotate_stack(stack_a);
	else if (command[2] == 'b')
		ft_rrotate_stack(stack_b);
	else
	{
		ft_rrotate_stack(stack_a);
		ft_rrotate_stack(stack_b);
	}
}

void		execute_command(char const *command,
		t_stack *stack_a, t_stack *stack_b)
{
	if (*command == 's')
	{
		if (command[1] == 'a')
			ft_swap_top(stack_a);
		else if (command[1] == 'b')
			ft_swap_top(stack_b);
		else
		{
			ft_swap_top(stack_a);
			ft_swap_top(stack_b);
		}
	}
	else if (*command == 'p')
	{
		if (command[1] == 'a')
			ft_push_stack(stack_b, ft_pop_stack(stack_a));
		else
			ft_push_stack(stack_a, ft_pop_stack(stack_b));
	}
	else
		rotate(command, stack_a, stack_b);
}
