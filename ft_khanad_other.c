#include "push_swap.h"

int	check_reaing(t_stack *a)
{
	int	size;
	int	x;

	size = ft_khanad(a);
	x = 1;
	while (a)
	{
		if (a->index == x)
			x++;
		a = a->next;
	}
	ft_printf("x = %d size = %d\n", x, size);
	if (x == size)
	{
		ft_printf("Tao\n");
		return (1);
	}
	return (0);
}

void	ft_khanad_other(t_stack **a, t_stack **b)
{
	int		x;
	t_stack	*tmp;
	int		size;
	int		i;

	x = 1;
	i = 0;
	size = ft_khanad(*a);
	while (check_reaing(*a) == 0)
	{
		x = 0;
		while (x != size)
		{
			tmp = *a;
			// i = i << 1;
			tmp->index = tmp->index >> 1;
			if ((tmp->index & 1) == 0)
			{
				printf("if \n");
				printf("tmp->index %d\n", tmp->data);
				ft_pb(a, b);
				printf("A\n");
				print(*a);
				printf("B\n");
				print(*b);
			}
			else
			{
				printf("else \n");
				ft_ra(a);
			}
			x++;

			ft_printf("x = %d\n", x);
			sleep(1);
		}
		while (*b)
		{
			ft_pa(a, b);
		}
		i++;
	}
}
