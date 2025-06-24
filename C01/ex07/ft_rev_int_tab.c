void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = -1;
	while (++i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
	int	size;
	int	i;

	size = 9;
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("tab[%d] = %d \n", i, tab[i]);
		i++;
	}
	return (0);
}
