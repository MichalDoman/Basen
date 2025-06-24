char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = -1;
	while ((unsigned int)(++i) < n && src[i])
		dest[i] = src[i];
	while ((unsigned int)i < n)
		dest[i++] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			*src;
	char			dest[50] = "Nothing here";
	char			dest_2[50] = "Nothing here";
	unsigned int	n;

	src = "To be copied, however it is pretty long";
	n = 5;
	printf("Original = \"%s\" \n", strncpy(dest, src, n));
	printf("My function = \"%s\" \n", ft_strncpy(dest_2, src, n));
	return (0);
}
