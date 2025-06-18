int	ft_str_is_printable(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char str_1[] = "Is it printable\n?";
	char str_2[] = "Is\tthis\tprintable?";
	char str_3[] = "This is printable";

	printf("str_1 -> %d \n", ft_str_is_printable(str_1));
	printf("str_2 -> %d \n", ft_str_is_printable(str_2));
	printf("str_3 -> %d \n", ft_str_is_printable(str_3));
	return (0);
}
