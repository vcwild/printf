NAME = libftprintf.a

CC=gcc
CC_FLAGS=-Wall -Wextra -Werror

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

OBJECT_FILES = $(SOURCE_FILES:.c=.o)

OBJECTS = $(addprefix $(OBJECTS_PATH)/,$(OBJECT_FILES))

INCLUDE_FILES = ft_printf.h

INCLUDES = $(addprefix $(INCLUDES_PATH)/,$(INCLUDE_FILES))

all: $(NAME)

make_dirs:
	mkdir -p $(OBJECTS_PATH)/handlers/validators
	mkdir -p $(OBJECTS_PATH)/handlers/helpers

$(NAME): make_dirs $(OBJECTS) $(OBJECTS_DIR)
	@ar rcs $(NAME) $(OBJECTS)

$(OBJECTS_PATH)/%.o: $(SOURCES_PATH)/%.c
	@$(CC) $(CC_FLAGS) -I $(INCLUDES_PATH) -o $@ -c $<

clean:
	rm -rf $(OBJECTS_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
