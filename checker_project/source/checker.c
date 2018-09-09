/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:12:38 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/09 16:25:30 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

int					main(int ac, char **av)
{
	size_t			initial_size;
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
	initial_size = stack_a->size;
	if (read_commands(stack_a, stack_b))
	{
		ft_printf("%s\n", (stack_a->size != initial_size ||
			!is_sorted_number_stack(stack_a) ? "KO" : "OK"));
		delete_number_stacks(stack_a, stack_b);
		return (0);
	}
	return (1);
}
