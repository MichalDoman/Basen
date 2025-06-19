#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;
	
	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
		{
				write(1, "\\", 1);
				write(1, &hex[(unsigned char)str[i] / 16], 1);
				write(1, &hex[(unsigned char)str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "Coucou\n\4\v\f\x0f\xff";
	
	ft_putstr_non_printable(str);
	return (0);
}
