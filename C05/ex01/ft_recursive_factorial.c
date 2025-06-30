int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (nb == 0);
	return (ft_recursive_factorial(nb - 1) * nb);
}

#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d \n", ft_recursive_factorial(nb));
	return (0);
}
