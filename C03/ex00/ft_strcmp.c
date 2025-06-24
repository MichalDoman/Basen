int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s1;
	char *s2;

	s1 = "This is ";
	s2 = "This is";
	printf("Original = %d \n", strcmp(s1, s2));
	printf("My function = %d \n", ft_strcmp(s1, s2));
	return (0);
}
