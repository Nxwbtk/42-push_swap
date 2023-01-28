/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:08:54 by bsirikam          #+#    #+#             */
/*   Updated: 2023/01/28 23:37:32 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct	s_stack
{
	int				data;
	struct s_stack	*next;
}				t_stack;

void	ft_check_arg(char *argv[]);
void	ft_add_back(t_stack **old, t_stack *newlst);
void	ft_check_same(t_stack *a);
void	free_av(char **av);
t_stack	*ft_lst_mai(int data);
t_stack	*ft_lst_last(t_stack *lst);

#endif
