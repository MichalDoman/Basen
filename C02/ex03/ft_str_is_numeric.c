int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	*str_1;
	char	*str_2;
	char	*str_3;

	str_1 = "Is 11 numeric?";
	str_2 = "12345 6";
	str_3 = "123456";
	printf("str_1 -> %d \n", ft_str_is_numeric(str_1));
	printf("str_2 -> %d \n", ft_str_is_numeric(str_2));
	printf("str_3 -> %d \n", ft_str_is_numeric(str_3));
	return (0);
}
