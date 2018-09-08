/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:12:38 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 19:53:17 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

void				print_stack_with_msg(t_stack *stack, char const *start_msg,
					char const *end_msg)
{
	t_stack_element	*element;

	if (start_msg)
		ft_printf("%s\n", start_msg);
	element = stack->bottom;
	while (element && element != stack->top)
	{
		ft_printf("%s\n", (char*)element->data);
		element = element->next;
	}
	if (element && element == stack->top)
		ft_printf("%s\n", (char*)element->data);
	if (end_msg)
		ft_printf("%s\n", end_msg);
}

int					main(int ac, char **av)
{
	int				i;
	t_stack			*stack;

	if (ac == 1)
	{
		ft_fdprintf(IO_STDERR, "Usage: %s num1 num2 ... numN\n", av[0]);
		return (1);
	}
	stack = ft_create_stack();
	i = 1;
	while (av[i])
	{
		ft_push_stack(stack, ft_create_stack_element(av[i],
							ft_strlen(av[i]) + 1));
		++i;
	}
	print_stack_with_msg(stack, "initial first stack", "-\nfirst stack");
	ft_delete_stack(stack, ft_common_deleter);
	return (0);
}
