NAME = libftprintf.a

CC=gcc
CC_FLAGS=-Wall -Wextra -Werror

SAFE_MAKEDIR = mkdir -p

INCLUDES_PATH = ./includes
OBJECTS_PATH = ./objects
SOURCES_PATH = ./sources

SOURCE_FILES = ft_printf.c \
				handlers/validators/is_argument.c \
				handlers/helpers/ft_putchar.c \
				handlers/helpers/ft_strlen.c \
				handlers/helpers/ft_itoa_base.c \
				handlers/helpers/ft_strdup.c \
				handlers/handle_argument_format.c \
				handlers/handle_char.c \
				handlers/handle_string.c \
				handlers/handle_pointer.c \
				handlers/handle_integer.c \
				handlers/handle_unsigned_decimal.c \
				handlers/handle_hexadecimal.c \
				handlers/handle_percent.c

SOURCES = $(addprefix $(SOURCES_PATH)/,$(SOURCE_FILES))

OBJECT_FILES = ft_printf.o \
					is_argument.o \
					ft_putchar.o \
					ft_strlen.o \
					ft_itoa_base.o \
					ft_strdup.o \
					handle_argument_format.o \
					handle_char.o \
					handle_string.o \
					handle_pointer.o \
					handle_integer.o \
					handle_unsigned_decimal.o \
					handle_hexadecimal.o \
					handle_percent.o

OBJECTS = $(addprefix $(OBJECTS_PATH)/,$(OBJECT_FILES))

INCLUDE_FILES = ft_printf.h \
								handlers.h \
								validators.h \
								helpers.h

INCLUDES = $(addprefix $(INCLUDES_PATH)/,$(INCLUDE_FILES))

all: $(NAME)

$(NAME): $(OBJECTS) $(OBJECTS_DIR)
	@ar rcs $(NAME) $(OBJECTS)

$(OBJECTS_PATH)/%.o: $(SOURCES) $(INCLUDES)
	mkdir -p $(OBJECTS_PATH)
	@$(CC) $(CC_FLAGS) -I $(INCLUDES_PATH) -o $@ -c $<

clean:
	rm -rf $(OBJECTS_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
