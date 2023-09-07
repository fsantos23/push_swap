NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g #-fsanitize=address

SRCS = push_swap.c atoi.c create.c errors.c find.c find2.c rules1.c rules2.c rules3.c sort1.c which_sort.c find3.c moves.c reorganize.c

RM = rm -f 

all : $(NAME)

$(NAME):
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean $(NAME)