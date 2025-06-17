void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a % *b;
	*a = *a / *b;
	*b = temp;
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d", a, b);
	return (0);
}
