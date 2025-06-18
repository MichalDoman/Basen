char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_new_word;

	i = 0;
	is_new_word = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= '0' && str[i] <= '9')
		{
			if (is_new_word && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			is_new_word = 0;
		}
		else
			is_new_word = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str_1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s \n", ft_strcapitalize(str_1));
	return (0);
}
