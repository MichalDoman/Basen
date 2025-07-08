int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (ft_find_next_prime(2));
	i = 2;
	while (i * i <= nb)
		if (nb % i++ == 0)
			return (ft_find_next_prime(nb + 1));
	return (nb);
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
