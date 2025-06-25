char	*ft_strupcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	return (str);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str_1[50];
	char	str_2[50];
	char	str_3[50];

	strcpy(str_1, "What case is it?");
	strcpy(str_2, "wHAT cASE iS tHIS?");
	strcpy(str_3, "this is lowercase right?");
	printf("str_1 -> %s\n", ft_strupcase(str_1));
	printf("str_2 -> %s\n", ft_strupcase(str_2));
	printf("str_3 -> %s\n", ft_strupcase(str_3));
	return (0);
}
