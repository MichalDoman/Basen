int	ft_str_is_numeric(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char str_1[] = "Is 11 numeric?";
	char str_2[] = "12345 6";
	char str_3[] = "123456";

	printf("str_1 -> %d \n", ft_str_is_numeric(str_1));
	printf("str_2 -> %d \n", ft_str_is_numeric(str_2));
	printf("str_3 -> %d \n", ft_str_is_numeric(str_3));
	return (0);
}
