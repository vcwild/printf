#include <ft_printf.h>

int	handle_argument_format(int c, va_list args)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter = handle_char(va_arg(args, int));
	if (c == 's')
		counter = handle_string(va_arg(args, char *));
	if (c == 'p')
		counter = handle_pointer(va_arg(args, long unsigned));
	if (c == 'i' || c == 'd')
		counter = handle_decimal(va_arg(args, signed int));
	if (c == 'u')
		counter = handle_unsigned_decimal(va_arg(args, unsigned int));
	if (c == 'x')
		counter = handle_hexadecimal(va_arg(args, unsigned int));
	if (c == 'X')
		counter = handle_hexadecimal_upper(va_arg(args, unsigned int));
	if (c == '%')
		counter = handle_percent(c);
	return (counter);
}
