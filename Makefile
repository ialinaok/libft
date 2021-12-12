# this makefile will compile a libft library from the source .c files

# first let's declare some variables

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \

MAKELIB = ar -rcs
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKELIB) $(NAME) $(OBJS)

%.o: %.c # take all .c files and compile them into object files
	$(CC) $(CFLAGS) -c $(SRCS)

clean: # will remove .o files
	rm -f $(OBJS)

fclean: clean # will run clean(rm all .o files) and libft.a
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re