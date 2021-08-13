#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define	HEX_BASE			"0123456789abcdef"
# define	HEX_BASE_UPPER		"0123456789ABCDEF"
# define	DECIMAL_BASE		"0123456789"
# define	PRECEDING_STR		"0x"
# define	EXCEPTION_STR		"(null)"
# define	ZERO_EXCEPTION_STR	"(nil)"


int		ft_printf(const char *fmt, ...);

int		handle_argument_format(int c, va_list args);
int		handle_char(char c);
int		handle_string(char *str);
int		handle_pointer(long unsigned ptr_addr);
int		handle_decimal(signed long value);
int		handle_unsigned_decimal(unsigned int value);
int		handle_hexadecimal(unsigned int value);
int		handle_hexadecimal_upper(unsigned int value);
int		handle_percent(char c);

int		ft_putchar(char c);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr(int nbr);
char	*itoa_base(unsigned long long n, char *base);

int		is_argument(int c);
int		is_flag(int c);

#endif
