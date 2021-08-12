#include <ft_printf.h>
#include <stdio.h>

int	print_preceding_string(char *str)
{
	int	counter;

	counter = handle_string(str);
	return (counter);
}

int	handle_pointer(long unsigned ptr_addr)
{
	int		counter;
	char	*str;

	counter = print_preceding_string(PRECEDING_STR);
	str = itoa_base(ptr_addr, HEX_BASE);
	counter += handle_string(str);
	free(str);
	return (counter);
}
