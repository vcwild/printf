int	is_argument(int c)
{
	return (c == 'c' ||
			c == 's' ||
			c == 'p' ||
			c == 'd' ||
			c == 'i' ||
			c == 'u' ||
			c == 'x' ||
			c == 'X' ||
			c == '%');
}
