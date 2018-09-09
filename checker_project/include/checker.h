/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 21:09:32 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 15:42:57 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <ft/bool.h>
# include <ft/conv.h>
# include <ft/stack.h>
# include <ft/io.h>
# include <ft/string.h>
# include <ft/memory.h>

# define SWAP_A_CMD_STR "sa"
# define SWAP_B_CMD_STR "sb"
# define SWAP_BOTH_CMD_STR "ss"
# define PUSH_A_CMD_STR "pa"
# define PUSH_B_CMD_STR "pb"
# define ROTATE_A_CMD_STR "ra"
# define ROTATE_B_CMD_STR "rb"
# define ROTATE_BOTH_CMD_STR "rr"
# define RROTATE_A_CMD_STR "rra"
# define RROTATE_B_CMD_STR "rrb"
# define RROTATE_BOTH_CMD_STR "rrr"

# ifdef DEBUG
#  define PRINT_BOTH_CMD_STR "dd"
#  define VALID_CMDS_COUNT 12
# endif

# ifndef VALID_CMDS_COUNT
#  define VALID_CMDS_COUNT 11
# endif

typedef	void(*t_two_stacks_f)(t_stack*,t_stack*);
typedef void(*t_one_stack_f)(t_stack*);

typedef enum		e_command_t
{
	ONE_STACK,
	TWO_STACKS
}					t_command_t;

typedef enum		e_call_conv
{
	JUST_A,
	JUST_B,
	A_B,
	B_A
}					t_call_conv;

typedef struct		s_func_spec
{
	t_command_t		type;
	t_call_conv		conv;
}					t_func_spec;

typedef union		u_command_f
{
	t_two_stacks_f	ts;
	t_one_stack_f	os;
}					t_command_f;

typedef struct		s_stack_command
{
	char const		*cmd;
	t_func_spec		spec;
	t_command_f		func;
}					t_stack_cmd;

t_bool				fill_number_stack(t_stack *stack, char **av);
void				delete_number_stacks(t_stack *stack_a, t_stack *stack_b);
t_bool				read_commands(t_stack *stack_a, t_stack *stack_b);

t_stack_cmd			get_stack_cmd(char const *command);
void				execute_command(t_stack_cmd cmd,
					t_stack *stack_a, t_stack *stack_b);

t_bool				is_sorted_number_stack(t_stack *stack);

void				push_from_to(t_stack *stack_a, t_stack *stack_b);

void				print_two_stacks(t_stack *stack_a, t_stack *stack_b);

void				swap_two_stacks(t_stack *stack_a, t_stack *stack_b);
void				rotate_two_stacks(t_stack *stack_a, t_stack *stack_b);
void				rrotate_two_stacks(t_stack *stack_a, t_stack *stack_b);

#endif
