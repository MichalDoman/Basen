#include <unistd.h>

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;
	char	c;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			write(1, (char []){'0' + n1 / 10, '0' + n1 % 10, ' '}, 3);
			write(1, (char []){'0' + n2 / 10, '0' + n2 % 10}, 2);
			if (n1 != 98)
				write(1, ", ", 2);
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
