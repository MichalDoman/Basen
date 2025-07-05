int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb >= 2 && i * i <= nb)
		if (nb % i++ == 0)
			return (0);
	return (nb >= 2);
}

#include <stdio.h>

int	main(void)
{
	int	nb_1;
	int	nb_2;
	int	nb_3;
	int	nb_4;
	int	nb_5;

	nb_1 = -1;
	nb_2 = 0;
	nb_3 = 2;
	nb_4 = 7918;
	nb_5 = 7919;
	printf("Number %d -> %d \n", nb_1, ft_is_prime(nb_1));
	printf("Number %d -> %d \n", nb_2, ft_is_prime(nb_2));
	printf("Number %d -> %d \n", nb_3, ft_is_prime(nb_3));
	printf("Number %d -> %d \n", nb_4, ft_is_prime(nb_4));
	printf("Number %d -> %d \n", nb_5, ft_is_prime(nb_5));
	return (0);
}
