char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	dest[20] = "abc";
	char	*src;

	src = "def";
	printf("My function = %s \n", ft_strcat(dest, src));
	return (0);
}
