/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_number_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 20:51:04 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 20:51:24 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

t_bool	fill_number_stack(t_stack *stack, char **av)
{
	int	i;
	int	number;

	i = 1;
	while (av[i])
	{
		if (av[i][0] == '-')
		{
			if (!ft_str_is_digits((av[i] + 1)))
				return (FALSE);
		}
		else
		{
			if (!ft_str_is_digits(av[i]))
				return (FALSE);
		}
		number = ft_strtoi(av[i]);
		ft_push_stack(stack, ft_create_stack_element(&number, sizeof(int)));
		++i;
	}
	return (TRUE);
}
