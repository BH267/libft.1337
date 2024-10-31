
SRC = ft_isprint.c    ft_putnbr_fd.c  ft_strlen.c ft_atoi.c \
	  ft_itoa.c       ft_putstr_fd.c  ft_strncmp.c ft_bzero.c \
	  ft_memchr.c     ft_split.c      ft_strnstr.c ft_calloc.c \
	  ft_memcpy.c     ft_strchr.c     ft_strrchr.c ft_isalnum.c \
	  ft_memmove.c    ft_strdup.c     ft_substr.c ft_isalpha.c \
	  ft_memset.c     ft_strjoin.c    ft_tolower.c ft_isascii.c \
	  ft_putchar_fd.c ft_strlcat.c    ft_toupper.c ft_isdigit.c \
	  ft_putendl_fd.c ft_strlcpy.c
NAME = libft.a
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -rf

all :$(NAME)

$(NAME) : $(OBJ)
	@$(AR) $(NAME) $(OBJ)

%.o : %.c
	@$(CC) $(CFLAGS) -o $^ -c $@

clean :
	@$(RM) $(OBJ)

fclean : clean 
	@$(RM) $(NAME)
re : fclean all

.PHONY: clean fclean

