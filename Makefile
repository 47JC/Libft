CFLAGS = -Wall -Wextra -Werror
CC = gcc
SRC = ft_atoi.c ft_isdigit.c ft_memset.c ft_strncmp.c\
	ft_bzero.c ft_isprint.c ft_strchr.c ft_strnstr.c\
	ft_isalnum.c ft_memchr.c ft_strlcat.c ft_strrchr.c\
	ft_isalpha.c ft_memcmp.c ft_strlcpy.c ft_tolower.c\
	ft_isascii.c ft_memcpy.c ft_strlen.c ft_toupper.c \
	ft_memmove.c ft_substr.c
OBJ_FILES = $(SRC:.c=.o)
NAME = libft.a
all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar -rcs $(NAME) $(OBJ_FILES)
clean:
	rm -f $(OBJ_FILES)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)

.PHONY:	all clean fclean re
