#include <unistd.h>

void	print_address(unsigned long addr, int count)
{
	char	*hex;
	
	hex = "0123456789abcdef";
	if (count < 16)
		print_address(addr / 16, count + 1);
	write(1, &hex[addr % 16], 1);
}

void	convert_addr_to_hex(unsigned long addr)
{
	int		i;
	char	*hex;
	char	hex_addr[16];

	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		hex_addr[i] = hex[addr % 16];
		addr = addr / 16;
		i--;
	}
	write(1, &hex_addr, 16);
	write(1, ": ", 2);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	convert_addr_to_hex((unsigned long)addr);
	write(1, "\n", 1);
	write(1, "\n", 1);
	print_address((unsigned long)addr, 1);
	write(1, ": ", 1);
	return (addr);
}

int	main(void)
{
	char *str;
	unsigned int	size;
	
	str = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	size = 92;
	ft_print_memory(str, size);
	return (0);
}
