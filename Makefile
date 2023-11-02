SRC = ./src/creat_list.c\
	./src/list_utils.c\
	./src/swap_functions1.c\
	./src/swap_functions2.c\
	./src/swap_functions3.c\
	./src/algorithms.c\
	./src/algorithms_utils.c\
	./src/main.c\

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm

NAME = push_swap

LIBFT = ./Libft/libft.a

all:	$(LIBFT) $(NAME)

$(NAME):
	${CC} -g ${CFLAGS} ${SRC} ${LIBFT} -o $(NAME)

$(LIBFT):
	@make -C Libft -s
clean:
	@make clean -C Libft -s

fclean: clean
	@make fclean -C Libft -s
	$(RM) -f $(NAME)

re:	fclean all





