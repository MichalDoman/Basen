int ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	i = 1;
	while (i <= nb)
		result *= i++;
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	nb;
	
	nb = 10;
	printf("%d \n", ft_iterative_factorial(nb));
	return (0);
}
