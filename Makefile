PROJ_NAME = libftprintf.a

CC=gcc

CC_FLAGS=-g -Wall -Wextra -Werror

# TODO: Test this
# vpath %.c ./handlers ./handlers/helpers

SRCS = ft_printf.c \
				./handlers/validators/is_argument.c \
				./handlers/helpers/ft_putchar.c \
				./handlers/helpers/ft_strlen.c \
				./handlers/helpers/ft_itoa_base.c \
				./handlers/helpers/ft_strdup.c \
				./handlers/handle_argument_format.c \
				./handlers/handle_char.c \
				./handlers/handle_string.c \
				./handlers/handle_pointer.c \
				./handlers/handle_integer.c \
				./handlers/handle_unsigned_decimal.c \
				./handlers/handle_hexadecimal.c \
				./handlers/handle_percent.c

# OBJECTS = $(SRCS:.c=.o)

INCLUDES = ft_printf.h \
						./handlers/handlers.h \
						./handlers/validators/validators.h \
						./handlers/helpers/helpers.h

# all: $(PROJ_NAME)
all: unittest.o

# $(PROJ_NAME): $(OBJECTS)
#     $(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -o $@ $< $(CC_FLAGS)

unittest.o: unittest.c
	$(CC) $(CC_FLAGS) $(SRCS) $< -o $@

clean:
	rm -f *.o

# clean:
#     rm -rf $(OBJECTS)

# fclean: clean
#     rm -rf $(PROJ_NAME)

# re: fclean all

# .PHONY: all clean fclean re
