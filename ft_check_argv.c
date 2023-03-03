/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 00:18:09 by bsirikam          #+#    #+#             */
/*   Updated: 2023/03/04 02:28:01 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_argv(char **argv)
{
	int	size;
	int	i;

	size = ft_strlen(argv[1]);
	i = 0;
	while (argv[1][i] == ' ')
		i++;
	if (i == size)
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_SUCCESS);
	}
	if (argv[1][0] && !argv[2] && (!argv[1][2] || !argv[1][1]))
	{
		exit(EXIT_SUCCESS);
	}
	if (!argv[1][0])
		oak();
}

void	end_program(t_stack *a)
{
	ft_free_stack(a);
	exit(EXIT_SUCCESS);
}
