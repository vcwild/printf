#include "ft_printf.h"

int parse_input(char *str, va_list args)
{
	// TODO: Maybe parse input and return the number of bytes parsed?
}

int ft_handle_input(char *str, va_list args)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] != '%')
			counter += ft_putchar(str[i]);
		else if ((str[i] == '%') && str[i + 1])
		{
			// parse_input(&str[++i], args); --> Probably do not need because no flags are used
			if (is_argument(str[++i]))
				handle_argument_format(str[i], args);
			else if (str[i])
				counter += ft_putchar(str[i]);
		}
		i++;
	}
	return (counter);
}

void	ft_printf(const char *fmt, ...)
{
	va_list		args;
	const char *str;
	int		counter;

	str = ft_strdup(fmt);
	if (!str)
		return (0);
	va_start(args, fmt);
	counter += ft_handle_input(str, args);
	va_end(args);
	free((void *)str);
	return (counter);
}
