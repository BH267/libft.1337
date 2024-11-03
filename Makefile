
SRC = ft_isprint.c    ft_putnbr_fd.c  ft_strlen.c ft_atoi.c \
	  ft_itoa.c       ft_putstr_fd.c  ft_strncmp.c ft_bzero.c \
	  ft_memchr.c     ft_split.c      ft_strnstr.c ft_calloc.c \
	  ft_memcpy.c     ft_strchr.c     ft_strrchr.c ft_isalnum.c \
	  ft_memmove.c    ft_strdup.c     ft_substr.c ft_isalpha.c \
	  ft_memset.c     ft_strjoin.c    ft_tolower.c ft_isascii.c \
	  ft_putchar_fd.c ft_strlcat.c    ft_toupper.c ft_isdigit.c \
	  ft_putendl_fd.c ft_strlcpy.c
BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
       	ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
	ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

NAME = libft.a
OBJ = $(SRC:.c=.o)
OBJB = $(BONUS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -rf

all :$(NAME)

$(NAME) : $(OBJ)
	@$(AR) $(NAME) $(OBJ)

bonus: $(NAME) $(OBJB)
	@$(AR) $(NAME) $(OBJB)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@$(RM) $(OBJ) $(OBJB)

fclean : clean 
	@$(RM) $(NAME) $(bonus)
re : fclean all

.PHONY:all re clean fclean

