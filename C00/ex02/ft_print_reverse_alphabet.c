#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = '{';
	while (c-- > 'a')
		write(1, &c, 1);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
