/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 20:51:57 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 00:24:08 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

static void		print_stack_with_msg(t_stack *stack,
				char const *start_msg, char const *end_msg)
{
	t_stack_element *element;

	if (start_msg)
		ft_printf("%s\n", start_msg);
	element = stack->bottom;
	while (element && element != stack->top)
	{
		ft_printf("%d\n", *((int*)element->data));
		element = element->next;
	}
	if (element && element == stack->top)
		ft_printf("%d\n", *((int*)element->data));
	if (end_msg)
		ft_printf("%s\n", end_msg);
}

t_bool			read_commands(t_stack *stack_a, t_stack *stack_b)
{
	t_stack_cmd	cmd;
	char		*command;

	while (ft_get_string(IO_STDIN, &command, LINE_BREAK) > 0)
	{
		cmd = get_stack_cmd(command);
		if (cmd.cmd)
			execute_command(cmd, stack_a, stack_b);
		else
		{
			delete_number_stacks(stack_a, stack_b);
			ft_fdprintf(IO_STDERR, "Error\n");
			return (FALSE);
		}
		print_stack_with_msg(stack_a, "-------\nstack a", "-------");
		print_stack_with_msg(stack_b, "-------\nstack b", "-------");
		free(command);
	}
	return (TRUE);
}
