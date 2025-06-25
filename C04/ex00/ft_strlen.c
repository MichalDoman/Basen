int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	printf("length = %d", ft_strlen("This is the string"));
	return (0);
}
