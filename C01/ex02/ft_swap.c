void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 12;
	ft_swap(&a, &b);
	printf("a = %d, b = %d", a, b);
	return (0);
}
