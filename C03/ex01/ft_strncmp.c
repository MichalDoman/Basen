int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	while ( i < n && s1[i] && s1[i] == s2[i])
		i++;
	if (n == 0 || n == i)
		return (0);
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s1;
	char *s2;
	unsigned int n;
	
	s1 = "abc";
	s2 = "abcXYZ";
	n = 3;
	printf("Original = %d \n", strncmp(s1, s2, n));
	printf("My function = %d \n", ft_strncmp(s1, s2, n));
	return (0);
}
