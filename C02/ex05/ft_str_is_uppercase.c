int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	*str_1;
	char	*str_2;
	char	*str_3;

	str_1 = "Is it uppercase?";
	str_2 = "IS THIS UPPERCASE?";
	str_3 = "THISISUPPERCASE";
	printf("str_1 -> %d \n", ft_str_is_uppercase(str_1));
	printf("str_2 -> %d \n", ft_str_is_uppercase(str_2));
	printf("str_3 -> %d \n", ft_str_is_uppercase(str_3));
	return (0);
}
