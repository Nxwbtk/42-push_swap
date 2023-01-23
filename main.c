/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:09:44 by bsirikam          #+#    #+#             */
/*   Updated: 2023/01/24 03:03:08 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_less_arg(char *str)
{
	ft_printf("%s\n", str);
	exit(EXIT_SUCCESS);
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		ft_less_arg("Arguments are less than 2");
	ft_printf("%s\n", argv[1]);
	return (0);
}
