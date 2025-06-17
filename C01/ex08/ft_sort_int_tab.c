void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			temp = tab[i];
			if (temp > tab[j])
			{
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
	int	size;
	int	i;

	size = 9;
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("tab[%d] = %d \n", i, tab[i]);
		i++;
	}
	return (0);
}
