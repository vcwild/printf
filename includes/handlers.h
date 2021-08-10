#ifndef HANDLERS_H
# define HANDLERS_H

#define	HEX_BASE		"0123456789abcdef"
#define	DECIMAL_BASE	"0123456789"
#define	PRECEDING_STR	"0x"

#include <stdarg.h>
#include <validators.h>
#include <helpers.h>

int	handle_argument_format(int c, va_list args);
int	handle_char(char c);
int	handle_string(char *str);
int	handle_pointer(long unsigned ptr_addr);
int	handle_integer(signed int value);
int	handle_unsigned_decimal(unsigned int value);
int	handle_hexadecimal(unsigned int value);
int	handle_percent(char c);

#endif
