char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	
	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "To be copied, however it is pretty long";
	char	dest[50] = "Nothing here";
	
	printf("dest = \"%s\"", ft_strncpy(dest, src, 5));
	return (0);
}
