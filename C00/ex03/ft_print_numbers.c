#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = '/';
	while (c++ < '9')
		write(1, &c, 1);
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
