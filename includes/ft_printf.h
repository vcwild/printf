#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *fmt, ...);

#define	HEX_BASE		"0123456789abcdef"
#define	DECIMAL_BASE	"0123456789"
#define	PRECEDING_STR	"0x"

#include <stdarg.h>

int	handle_argument_format(int c, va_list args);
int	handle_char(char c);
int	handle_string(char *str);
int	handle_pointer(long unsigned ptr_addr);
int	handle_integer(signed int value);
int	handle_unsigned_decimal(unsigned int value);
int	handle_hexadecimal(unsigned int value);
int	handle_percent(char c);

# include <unistd.h>
# include <stdlib.h>

int		ft_putchar(char c);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putnbr(int nbr);
char	*itoa_base(unsigned long long n, char *base);

int	is_argument(int c);
int is_flag(int c);


#endif
