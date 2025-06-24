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
	return (dest[i] = '\0', dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[20];
	char	*src;

	strcpy(dest, "abc");
	src = "def";
	printf("My function = %s \n", ft_strcat(dest, src));
	return (0);
}
