void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
		{
			temp = tab[i];
			if (temp > tab[j])
			{
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
	}
}
// {int i=-1,j,tmp;while(++i<s){j=i;while(++j<s)if(t[i]>t[j]){tmp=t[i];t[i]=t[j];t[j]=tmp;}}}
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
