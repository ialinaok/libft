# this makefile will compile a libft library from the source .c files

# first let's declare some variables

NAME = libft.a
CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c
# CFILES = *.c this is wrong
MAKELIB = ar -rcs
OBJS = $(SRCS:.c =.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKELIB) $(NAME) $(OBJS)

%.c: %.c # take all .c files and compile them into object files
	$(CC) $(CFLAGS) $(SRCS)

clean: # will remove .o files
	rm -f $(OBJS)

fclean: clean # will run clean(rm all .o files) and libft.a
	rm $(NAME)

re: fclean all # will do as much as fclean and remake binary

.PHONY: all clean fclean re