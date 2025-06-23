int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s1;
	char *s2;
	
	s1 = "This is it";
	s2 = "This is IT";
	printf("Original = %d \n", strcmp(s1, s2));
	printf("My function = %d \n", ft_strcmp(s1, s2));
	return (0);
}
