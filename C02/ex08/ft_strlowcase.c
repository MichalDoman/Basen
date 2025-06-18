char	*ft_strlowcase(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char str_1[] = "What case is it?";
	char str_2[] = "wHAT cASE iS tHIS?";
	char str_3[] = "THIS IS UPPERCASE RIGHT?";

	printf("str_1 -> %s \n", ft_strlowcase(str_1));
	printf("str_2 -> %s \n", ft_strlowcase(str_2));
	printf("str_3 -> %s \n", ft_strlowcase(str_3));
	return (0);
}
