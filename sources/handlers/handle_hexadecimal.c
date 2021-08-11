#include <ft_printf.h>

int	handle_hexadecimal(unsigned int value)
{
	int		counter;
	char	*str;

	str = itoa_base(value, HEX_BASE);
	counter = handle_string(str);
	free(str);
	return (counter);
}
