int	ft_recursive_power(int nb, int power)
{
	if (power <= 0)
		return (power == 0);
	return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>

int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 4;
	printf("%d \n", ft_recursive_power(nb, power));
	return (0);
}
