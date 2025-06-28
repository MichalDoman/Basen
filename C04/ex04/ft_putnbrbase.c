#include <unistd.h>
#include <limits.h>

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	i = -1;
	while (base[++i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i;
		while (base[++j])
			if (base[i] == base[j])
				return (0);
	}
	if (i == 1)
		return (0);
	return (i);
}

void	handle_recursion(long nbr, char *base, int base_len)
{
	if (nbr >= base_len)
		handle_recursion((nbr / base_len), base, base_len);
	write(1, &base[nbr % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	l_nbr;
	
	base_len = is_base_valid(base);
	if (!base_len)
		return ;
	l_nbr = nbr;
	if (nbr < 0)
	{
		l_nbr = -l_nbr;
		write(1, "-", 1);
	}
	handle_recursion(l_nbr, base, base_len);
}

int	main(void)
{
	int		nbr;
	char	*base;

	nbr = 70;
	base = "0123456789abcdef";
	ft_putnbr_base(nbr, base);
	write(1, "\n", 1);
	return (0);
}
