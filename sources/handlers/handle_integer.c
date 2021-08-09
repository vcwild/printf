#include "handlers.h"

static int	handle_negative_integer(int *value)
{
	int	counter;

	counter = 0;
	if (*value < 0)
	{
		ft_putchar('-');
		*value *= -1;
		counter++;
	}
	return (counter);
}

int	handle_integer(signed int value)
{
	int		counter;
	char	*str;

	counter = handle_negative_integer(&value);
	str = itoa_base(value, DECIMAL_BASE);
	counter += handle_string(str);
	free(str);
	return (counter);
}
