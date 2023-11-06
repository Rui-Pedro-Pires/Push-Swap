SRC = ./src/creat_list.c\
	./src/list_utils.c\
	./src/swap_functions1.c\
	./src/swap_functions2.c\
	./src/swap_functions3.c\
	./src/algorithms.c\
	./src/algorithms_utils1.c\
	./src/algorithms_utils2.c\
	./src/algorithms_utils3.c\
	./src/algorithms_utils4.c\
	./src/main.c\

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm

NAME = push_swap

LIBFT = ./include/Libft/libft.a

FT_PRINTF = ./include/ft_printf/libftprintf.a

OBJS = $(SRC:.c=.c)

all:	$(NAME)

$(NAME): $(LIBFT) $(FT_PRINTF) $(OBJS)
	@${CC} ${CFLAGS} ${OBJS} -o $(NAME) ${LIBFT} ${FT_PRINTF}

$(LIBFT):
	@cd ./include/Libft/ && make -s

$(FT_PRINTF):
	@cd ./include/ft_printf/ && make -s

clean:
	@cd ./include/Libft/ && make clean -s
	@cd ./include/ft_printf/ && make clean -s

fclean: clean
	@cd ./include/Libft/ && make fclean -s
	@cd ./include/ft_printf/ && make fclean -s
	$(RM) -f $(NAME)

re:	fclean all





