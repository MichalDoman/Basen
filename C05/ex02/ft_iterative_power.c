int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	if (power < 0)
		return (0);
	result = 1;
	i = 1;
	while (i++ <= power)
		result *= nb;
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 4;
	printf("%d \n", ft_iterative_power(nb, power));
	return (0);
}
