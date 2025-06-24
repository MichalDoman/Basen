int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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

	str_1 = "Is it lowercase?";
	str_2 = "is this lowercase?";
	str_3 = "thisislowercase";
	printf("str_1 -> %d \n", ft_str_is_lowercase(str_1));
	printf("str_2 -> %d \n", ft_str_is_lowercase(str_2));
	printf("str_3 -> %d \n", ft_str_is_lowercase(str_3));
	return (0);
}
