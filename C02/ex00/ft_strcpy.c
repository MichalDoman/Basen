char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	return (dest[i] = '\0', dest);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "To be copied, however it is pretty long";
	char	dest[50] = "Nothing here";

	printf("dest = \"%s\"", ft_strcpy(dest, src));
	return (0);
}
