int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	*str_1;
	char	*str_2;
	char	*str_3;

	str_1 = "Is it printable\n?";
	str_2 = "Is\tthis\tprintable?";
	str_3 = "This is printable";
	printf("str_1 -> %d \n", ft_str_is_printable(str_1));
	printf("str_2 -> %d \n", ft_str_is_printable(str_2));
	printf("str_3 -> %d \n", ft_str_is_printable(str_3));
	return (0);
}
