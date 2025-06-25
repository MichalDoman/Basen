int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	return (result * sign);
}

#include <stdio.h>

int	main(void)
{
	char	*str_1;
	char	*str_2;
	char	*str_3;

	str_1 = "   ---+--+1234ab567";
	str_2 = " - -123";
	str_3 = "\t\t ---321 123";
	printf("str_1 -> %d \n", ft_atoi(str_1));
	printf("str_2 -> %d \n", ft_atoi(str_2));
	printf("str_3 -> %d \n", ft_atoi(str_3));
	return (0);
}
