/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_stack_cmd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 00:08:54 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 00:23:40 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

static void				init_specs(t_stack_cmd *cmds)
{
	cmds[0].spec = (t_func_spec){ONE_STACK, JUST_A};
	cmds[1].spec = (t_func_spec){ONE_STACK, JUST_B};
	cmds[2].spec = (t_func_spec){TWO_STACKS, A_B};
	cmds[3].spec = (t_func_spec){TWO_STACKS, A_B};
	cmds[4].spec = (t_func_spec){TWO_STACKS, B_A};
	cmds[5].spec = (t_func_spec){ONE_STACK, JUST_A};
	cmds[6].spec = (t_func_spec){ONE_STACK, JUST_B};
	cmds[7].spec = (t_func_spec){TWO_STACKS, A_B};
	cmds[8].spec = (t_func_spec){ONE_STACK, JUST_A};
	cmds[9].spec = (t_func_spec){ONE_STACK, JUST_B};
	cmds[10].spec = (t_func_spec){TWO_STACKS, A_B};
#ifdef DEBUG
	cmds[11].spec = (t_func_spec){ONE_STACK, JUST_A};
	cmds[12].spec = (t_func_spec){ONE_STACK, JUST_B};
	cmds[13].spec = (t_func_spec){TWO_STACKS, A_B};
#endif
}

static void				init_funcs(t_stack_cmd *cmds)
{
	cmds[0].func = (t_command_f){.os = ft_stack_swap_top};
	cmds[1].func = (t_command_f){.os = ft_stack_swap_top};
	cmds[2].func = (t_command_f){.ts = swap_two_stacks};
	cmds[3].func = (t_command_f){.ts = push_from_to};
	cmds[4].func = (t_command_f){.ts = push_from_to};
	cmds[5].func = (t_command_f){.os = ft_rotate_stack};
	cmds[6].func = (t_command_f){.os = ft_rotate_stack};
	cmds[7].func = (t_command_f){.ts = rotate_two_stacks};
	cmds[8].func = (t_command_f){.os = ft_rrotate_stack};
	cmds[9].func = (t_command_f){.os = ft_rrotate_stack};
	cmds[10].func = (t_command_f){.ts = rrotate_two_stacks};
#ifdef DEBUG
	cmds[11].func = (t_command_f){.os = ft_print_num_stack};
	cmds[12].func = (t_command_f){.os = ft_print_num_stack};
	cmds[13].func = (t_command_f){.ts = print_two_stacks};
#endif
}

static t_stack_cmd		*get_valid_commands(void)
{
	static int			init = 0;
	static t_stack_cmd	cmds[VALID_CMDS_COUNT];

	if (!init)
	{
		cmds[0].cmd = SWAP_A_CMD_STR;
		cmds[1].cmd = SWAP_B_CMD_STR;
		cmds[2].cmd = SWAP_BOTH_CMD_STR;
		cmds[3].cmd = PUSH_A_CMD_STR;
		cmds[4].cmd = PUSH_B_CMD_STR;
		cmds[5].cmd = ROTATE_A_CMD_STR;
		cmds[6].cmd = ROTATE_B_CMD_STR;
		cmds[7].cmd = ROTATE_BOTH_CMD_STR;
		cmds[8].cmd = RROTATE_A_CMD_STR;
		cmds[9].cmd = RROTATE_B_CMD_STR;
		cmds[10].cmd = RROTATE_BOTH_CMD_STR;
#ifdef DEBUG
		cmds[11].cmd = PRINT_A_CMD_STR;
		cmds[12].cmd = PRINT_B_CMD_STR;
		cmds[13].cmd = PRINT_BOTH_CMD_STR;
#endif
		init_specs(cmds);
		init_funcs(cmds);
		init = 1;
	}
}

t_stack_cmd				get_stack_cmd(char const *command)
{
	int					i;
	t_stack_cmd			*cmds;

	i = 0;
	cmds = get_valid_commands();
	while (i < VALID_CMDS_COUNT)
	{
		if (!ft_strcmp(command, cmds[i].cmd))
			return cmds[i];
		++i;
	}
	return ((t_stack_cmd){.cmd = 0, .spec = {0, 0}, .func = 0});
}
