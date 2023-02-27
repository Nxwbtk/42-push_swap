/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 00:18:09 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/28 00:00:30 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_argv(char **argv)
{
	if (!argv[1][2] || (argv[1][0] && !argv[1][2] && !argv[2]))
	{
		exit(EXIT_SUCCESS);
	}
	if (argv[1][0] && !argv[2])
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_SUCCESS);
	}
	if (!argv[1][0])
		oak();
}
