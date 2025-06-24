char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	return (dest[i] = '\0', dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			dest[20];
	char			dest_2[20];
	char			*src;
	unsigned int	nb;

	strcpy(dest, "abc");
	strcpy(dest_2, "abc");
	src = "defgh";
	nb = 2;
	printf("Original = %s \n", strncat(dest, src, nb));
	printf("My function = %s \n", ft_strncat(dest_2, src, nb));
	return (0);
}
