#include <unistd.h>

void	ft_is_negative(int n)
{
	// write(1, (n < 0 ? "N" : "P"), 1);
	if (n < 0)
		return (write(1, "N", 1), (void)0);
	write(1, "P", 1);
}

int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
	return (0);
}
