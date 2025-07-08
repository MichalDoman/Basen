int	ft_find_next_prime(int nb)
{
	int	i;
	int	is_prime;

	is_prime = (nb >= 2);
	i = 2;
	while (nb >= 2 && i * i <= nb)
		if (nb % i++ == 0)
			is_prime = 0;
	if (is_prime)
		return (nb);
	return (ft_find_next_prime(nb + 1));
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
	nb_5 = 7920;
	printf("Number %d -> %d \n", nb_1, ft_find_next_prime(nb_1));
	printf("Number %d -> %d \n", nb_2, ft_find_next_prime(nb_2));
	printf("Number %d -> %d \n", nb_3, ft_find_next_prime(nb_3));
	printf("Number %d -> %d \n", nb_4, ft_find_next_prime(nb_4));
	printf("Number %d -> %d \n", nb_5, ft_find_next_prime(nb_5));
	return (0);
}
