char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!to_find[0])
		return (str);
	i = -1;
	while (str[++i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (str + i);
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	*to_find;

	str = "abbababc";
	to_find = "ba";
	printf("Original = %s \n", strstr(str, to_find));
	printf("My function = %s \n", ft_strstr(str, to_find));
	return (0);
}
