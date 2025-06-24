#include <unistd.h>

void	print_address(unsigned long addr, int depth)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (depth < 16)
		print_address(addr / 16, depth + 1);
	write(1, &hex[addr % 16], 1);
	if (depth == 1)
		write(1, ": ", 2);
}

void	print_hexes(unsigned char *str, int line_len)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = -1;
	while (++i < 16)
	{
		if (i < line_len)
			write(1, (char []){hex[str[i] / 16], hex[str[i] % 16]}, 2);
		else
			write(1, "  ", 2);
		if (i != 0 && (i + 1) % 2 == 0)
			write(1, " ", 1);
	}
}

void	print_text(unsigned char *str, int line_len)
{
	int	i;

	i = -1;
	while (++i < line_len)
	{
		if (str[i] >= ' ' && str[i] <= '~')
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	line_len;

	i = 0;
	line_len = 16;
	while (i <= size)
	{
		if (size - i < 16)
			line_len = size - i;
		print_address((unsigned long)(addr + i), 1);
		print_hexes((unsigned char *)(addr + i), line_len);
		print_text((unsigned char *)(addr + i), line_len);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

int	main(void)
{
	char			*str;
	unsigned int	size;

	str = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	size = 92;
	ft_print_memory(str, size);
	return (0);
}
