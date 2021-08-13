#include <ft_printf.h>

int	handle_string(char *str)
{
	int	counter;

	counter = 0;
	if (!str)
		str = EXCEPTION_STR;
	while (str[counter] != '\0')
		counter += ft_putchar(str[counter]);
	return (counter);
}
