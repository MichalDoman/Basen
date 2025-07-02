int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index != 0);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>

int	main(void)
{
	int	index;
	int	i;

	index = 20;
	i = 0;
	while (i <= index)
	{
		printf("index %d: %d \n", i, ft_fibonacci(i));
		i++;
	}
	return (0);
}
