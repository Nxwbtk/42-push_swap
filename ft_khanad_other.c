#include "push_swap.h"

int	check_sort(t_stack *a)
{
	t_stack	*tmp;
	int		size;
	int		one;
	int		two;
	int		x;

	tmp = a;
	size = ft_khanad(a);
	one = tmp->index;
	two = tmp->next->index;
	x = 1;
	printf("size = %d\n", size);
	while (tmp && tmp->next && x != size)
	{
		if (one < two)
		{
			printf("one = %d, two = %d\n", one, two);
			x++;
			one = two;
			if (tmp->next->next)
			{
				tmp = tmp->next;
				two = tmp->next->index;
			}
		}
		else
			return (0);
	}
	return (1);
}

void	ft_throwback_a(t_stack **a, t_stack **b)
{
	int	size;

	size = ft_khanad(*b);
	while (ft_khanad(*a) != size)
	{
		ft_pa(a, b);
	}
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
	while (check_sort(*a) == 0)
	{
		x = 0;
		while (x != size)
		{
			tmp = *a;
			tmp->index = tmp->index >> 1;
			if ((tmp->index & 1) == 0)
			{
				ft_pb(a, b);
			}
			else
			{
				printf("else \n");
				ft_ra(a);
			}
			printf("a\n");
			print(*a);
			printf("b\n");
			print(*b);
			x++;
			if (*a == NULL && ft_khanad(*b) == size)
			{
				ft_throwback_a(a, b);
			}
			sleep(1);
		}

		// while (*b != NULL && ft_khanad(*a) != size)
		// {
		// 	ft_pa(a, b);
		// 	printf("------------------\n");
		// 	printf("a pb \n");
		// 	print(*a);
		// 	printf("b pb \n");
		// 	print(*b);
		// 	printf("------------------\n");
		// }
		i++;
	}
}
