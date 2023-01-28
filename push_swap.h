/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:08:54 by bsirikam          #+#    #+#             */
/*   Updated: 2023/01/29 03:06:22 by bsirikam         ###   ########.fr       */
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
void	ft_sa(t_stack **a);
void	ft_sb(t_stack **b);
void	ft_ra(t_stack **a);
void	ft_rb(t_stack **b);
void	ft_rra(t_stack **a);
void	ft_rrb(t_stack **b);
void	ft_pb(t_stack **a, t_stack **b);
void	ft_pa(t_stack **a, t_stack **b);
void	ft_ss(t_stack **a, t_stack **b);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);
t_stack	*ft_lst_mai(int data);
t_stack	*ft_lst_last(t_stack *lst);

#endif
