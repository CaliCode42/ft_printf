NAME = libftprintf.a

SOURCES = \
	ft_atoi_base.c ft_check_precision.c ft_check_width.c ft_convert_nb.c \
	ft_fill_withzero.c ft_itoa_base.c ft_memset.c ft_parse_format.c \
	ft_present.c ft_printf.c ft_putformat.c ft_putstr.c ft_render_format.c \
	ft_strcpy.c ft_strlcpy.c ft_strjoin.c ft_strlen.c print_type.c \
	ft_free.c ft_pickstr.c
OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

bonus : all

$(NAME): $(OBJECTS)
	ar rcs $@ $(OBJECTS)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re