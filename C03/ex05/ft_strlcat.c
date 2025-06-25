unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int 	len;
	unsigned int 	i;
	unsigned int 	j;

	len = 0;
	while (src[len])
		len++;
	i = 0;
	while (dest[i])
		i++;
	if (size < i)
		len += size;
	else
		len += i;
	j = -1;
	while (++j + i + 1 < size)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (len);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char				src[] = "Something";
	char				dest_1[40] = "Nothing";
	char				dest_2[40] = "Nothing";
	unsigned int		size;

	size = 10;
	printf("Original: %ld, %s \n", strlcat(dest_1, src, size), dest_1);
	printf("My function: %d, %s \n", ft_strlcat(dest_2, src, size), dest_2);
	return (0);
}
