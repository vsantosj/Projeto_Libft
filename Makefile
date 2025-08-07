
CFLAGS = -Wall -Werror -Wextra -g
CC = gcc

FUNC =  ft_isalpha.c  ft_isdigit.c  ft_isprint.c  ft_strlen.c


OBJ = $(FUNC:.c=.o)


.c.o:	
	@echo "compilando $(<) "
	$(CC) $(CFLAGS) -I . -c $< -o $@

all:	$(OBJ)

clean:
	@echo "cleaning"
	@rm $(OBJ) 
