/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:06:21 by bsirikam          #+#    #+#             */
/*   Updated: 2023/02/13 02:59:44 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_av(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		free(av[i]);
		i++;
	}
	free(av);
}

void	error_arg(char **av)
{
	ft_printf("Error Argument is not number.\n");
	free_av(av);
	exit(EXIT_SUCCESS);
}

void	ft_check_arg(char *argv[])
{
	int		i;
	int		j;
	char	**av;
	int		x;

	i = 0;
	while (argv[i] && argv[i + 1])
	{
		j = 0;
		av = ft_split(argv[i + 1], ' ');
		while (av[j])
		{
			x = 0;
			while (av[j][x])
			{
				if (av[j][x] == '-' || av[j][x] == ' ' || ft_isdigit(av[j][x]))
					x++;
				else
					error_arg(av);
			}
			j++;
		}
		free_av(av);
		i++;
	}
}
