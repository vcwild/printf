NAME = libftprintf.a

SRCS = ft_printf.c

OBJECTS = ft_printf.o

INCLUDES = ft_printf.h

all: $(NAME)

$(NAME): $(OBJECTS)

$(OBJECTS): $(SRCS) $(INCLUDES)
	@gcc -Wextra -Werror -Wall -c $(SRCS)
	@ar rcs $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
