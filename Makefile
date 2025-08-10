CFLAGS		= -Wall -Wextra -Werror -g
CC			= clang
NAME		= libft.a
FLAGLIB		= -rcs
RM			= /bin/rm -f

FUNC		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strncmp.c ft_isprint.c ft_strlen.c ft_strchr.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_strnstr.c ft_memset.o

OBJ	= $(FUNC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ) libft.h
			@echo "Linking $(NAME)"
			@ar $(FLAGLIB) $(NAME) $(OBJ)
			@ranlib $(NAME)

bonus:		$(BONUS_OBJ) $(NAME)
			@echo "Linking bonus"
			@ar $(FLAGLIB) $(NAME) $(BONUS_OBJ)
			@ranlib $(NAME)

.c.o:
			@echo "Compiling $(<)"
			@$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
			@echo "Cleaning"
			@$(RM) $(OBJ) $(BONUS_OBJ)

fclean:		clean
			@echo "Cleaning headers"
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all re clean fclean
