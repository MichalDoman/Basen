unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_len;
	unsigned int	d_len;
	int				i;

	s_len = 0;
	while (src[s_len])
		s_len++;
	d_len = 0;
	while (dest[d_len])
		d_len++;
	if (size <= d_len)
		return (s_len + size);
	i = -1;
	while (src[++i] && i + d_len + 1 < size)
		dest[d_len + i] = src[i];
	return (dest[d_len + i] = '\0', s_len + d_len);
}
// i + d_len is unsigned so can be compared to size.
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char				src[] = "Something";
	char				dest_1[40] = "Nothing";
	char				dest_2[40] = "Nothing";
	unsigned int		size;

	size = 11;
	printf("Original: %ld, %s \n", strlcat(dest_1, src, size), dest_1);
	printf("My function: %d, %s \n", ft_strlcat(dest_2, src, size), dest_2);
	return (0);
}
