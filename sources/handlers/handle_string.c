#include <ft_printf.h>

int	handle_string(char *str)
{
	int	counter;

	counter = 0;
	if (!str)
		str = "(null)";
	while (str[counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter++;
	}
	return (counter);
}
