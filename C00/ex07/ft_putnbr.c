#include <unistd.h>
#include <limits.h>

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
		return (write(1, "-2147483648", 11), (void)0); // coma operation
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, (char []){'0' + nb % 10}, 1); // compound literal
}

int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-1234);
	write(1, "\n", 1);
	ft_putnbr(1234);
	write(1, "\n", 1);
	return (0);
}
