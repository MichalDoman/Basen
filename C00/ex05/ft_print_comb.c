#include <unistd.h>

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '/';
	while (++i <= '7')
	{
		j = i;
		while (++j <= '8')
		{
			k = j;
			while (++k <= '9')
			{
				write(1, (char []){i, j, k}, 3);
				if (i != '7')
					write(1, ", ", 2);
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
