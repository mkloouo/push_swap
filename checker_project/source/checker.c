/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:12:38 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 23:31:06 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

int					main(int ac, char **av)
{
	t_stack			*stack_a;
	t_stack			*stack_b;

	if (ac == 1)
	{
		ft_fdprintf(IO_STDERR, "Usage: %s num1 num2 ... numN\n", av[0]);
		return (1);
	}
	stack_a = ft_create_stack();
	stack_b = ft_create_stack();
	if (!fill_number_stack(stack_a, av))
	{
		delete_number_stacks(stack_a, stack_b);
		ft_fdprintf(IO_STDERR, "Error\n");
		return (1);
	}
	if (read_commands(stack_a, stack_b))
	{
		ft_printf("%s\n", (is_sorted_number_stack(stack_a) ? "OK" : "KO"));
		delete_number_stacks(stack_a, stack_b);
		return (0);
	}
	return (1);
}
