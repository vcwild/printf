#include "handlers.h"

int	handle_unsigned_decimal(unsigned int value)
{
	int		counter;
	char	*str;

	str = itoa_base(value, DECIMAL_BASE);
	counter = handle_string(str);
	free(str);
	return (counter);
}
