/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_command.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 21:00:40 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/08 21:04:16 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <checker.h>

t_bool	is_valid_command(char const *command)
{
	if (!ft_strcmp(command, SWAP_A_CMD))
		return (TRUE);
	else if (!ft_strcmp(command, SWAP_B_CMD))
		return (TRUE);
	else if (!ft_strcmp(command, SWAP_BOTH_CMD))
		return (TRUE);
	else if (!ft_strcmp(command, PUSH_A_CMD))
		return (TRUE);
	else if (!ft_strcmp(command, PUSH_B_CMD))
		return (TRUE);
	else if (!ft_strcmp(command, ROTATE_A_CMD))
		return (TRUE);
	else if (!ft_strcmp(command, ROTATE_B_CMD))
		return (TRUE);
	else if (!ft_strcmp(command, ROTATE_BOTH_CMD))
		return (TRUE);
	else if (!ft_strcmp(command, RROTATE_A_CMD))
		return (TRUE);
	else if (!ft_strcmp(command, RROTATE_B_CMD))
		return (TRUE);
	else if (!ft_strcmp(command, RROTATE_BOTH_CMD))
		return (TRUE);
	else
		return (FALSE);
}
