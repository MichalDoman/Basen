unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	src[] = "This should be copied";
	char	dest_1[] = "Nothing here";
	char	dest_2[] = "Nothing here";
	int		size;

	size = 0;
	printf("Original: %ld, %s \n", strlcpy(dest_1, src, size), dest_1);
	printf("My function: %d, %s \n", ft_strlcpy(dest_2, src, size), dest_2);
	return (0);
}
