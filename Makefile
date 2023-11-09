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

BONUS_SRC = ./bonus/creat_list.c\
	./bonus/list_utils.c\
	./bonus/swap_functions1.c\
	./bonus/swap_functions2.c\
	./bonus/swap_functions3.c\
	./bonus/main.c\
	./bonus/algorithm.c\

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm

NAME = push_swap

NAME_BONUS = checker

LIBFT = ./include/Libft/libft.a

FT_PRINTF = ./include/ft_printf/libftprintf.a

OBJS = $(SRC:.c=.o)

BONUS_OBJS = $(BONUS_SRC:.c=.o)

all:	$(NAME)

$(NAME): $(LIBFT) $(FT_PRINTF) $(OBJS)
	@${CC} ${CFLAGS} ${OBJS} -o $(NAME) ${LIBFT} ${FT_PRINTF}

bonus: $(LIBFT) $(FT_PRINTF) $(BONUS_OBJS)
	@${CC} -g ${CFLAGS} ${BONUS_OBJS} -o $(NAME_BONUS) ${LIBFT} ${FT_PRINTF}

$(LIBFT):
	@cd ./include/Libft/ && make -s

$(FT_PRINTF):
	@cd ./include/ft_printf/ && make -s

clean:
	@cd ./include/Libft/ && make clean -s
	@cd ./include/ft_printf/ && make clean -s
	$(RM) $(OBJS)

clean_bonus:
	@cd ./include/Libft/ && make clean -s
	@cd ./include/ft_printf/ && make clean -s
	$(RM) $(BONUS_OBJS)

fclean: clean
	@cd ./include/Libft/ && make fclean -s
	@cd ./include/ft_printf/ && make fclean -s
	$(RM) -f $(NAME)

fclean_bonus: clean_bonus
	@cd ./include/Libft/ && make fclean -s
	@cd ./include/ft_printf/ && make fclean -s
	$(RM) -f $(NAME_BONUS)

re:	fclean all





