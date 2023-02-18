#include "push_swap.h"

void	ft_khanad_song(t_stack **a)
{
	int	nueng;
	int	song;

	nueng = (*a)->data;
	song = (*a)->next->data;
	if (song < nueng)
		ft_sa(a);
}
