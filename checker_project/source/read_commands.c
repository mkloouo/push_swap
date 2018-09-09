/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 20:51:57 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 16:06:05 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

t_bool			read_commands(t_stack *stack_a, t_stack *stack_b)
{
	int			ret;
	t_stack_cmd	cmd;
	char		*command;

	while ((ret = ft_get_string(IO_STDIN, &command, LINE_BREAK)) >= 0)
	{
		if (ret == 0 || ft_strcmp("", command) == 0)
			break ;
		cmd = get_stack_cmd(command);
		if (cmd.cmd)
			execute_command(cmd, stack_a, stack_b);
		else
		{
			delete_number_stacks(stack_a, stack_b);
			ft_fdprintf(IO_STDERR, "Error\n");
			return (FALSE);
		}
		free(command);
	}
	return (TRUE);
}
