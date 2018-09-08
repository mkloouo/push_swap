/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 21:09:32 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 21:02:30 by modnosum         ###   ########.fr       */
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

# define SWAP_A_CMD "sa"
# define SWAP_B_CMD "sb"
# define SWAP_BOTH_CMD "ss"
# define PUSH_A_CMD "pa"
# define PUSH_B_CMD "pb"
# define ROTATE_A_CMD "ra"
# define ROTATE_B_CMD "rb"
# define ROTATE_BOTH_CMD "rr"
# define RROTATE_A_CMD "rra"
# define RROTATE_B_CMD "rrb"
# define RROTATE_BOTH_CMD "rrr"

t_bool	fill_number_stack(t_stack *stack, char **av);
void	delete_number_stacks(t_stack *stack_a, t_stack *stack_b);
t_bool	read_commands(t_stack *stack_a, t_stack *stack_b);

t_bool	is_valid_command(char const *command);
void	execute_command(char const *command,
		t_stack *stack_a, t_stack *stack_b);

t_bool	is_sorted_number_stack(t_stack *stack);

#endif
