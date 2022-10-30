NAME:=push_swap
SRC:=checkarg.c \
	 hp_instr.c \
	 hp_instr2.c \
	 ft_push_all_b.c \
	 ft_push_swap.c \
	 st_instr.c \
	 ft_sort_a.c \
	 main.c

SRC:=$(addprefix src/,$(SRC))
COMPILED_OBJS=$(shell find . -name '*.o')
OBJ=$(SRC:.c=.o)
IFLAGS=-I./libft/include -I./include
LFLAGS=-L./libft
LIBS=-lft
DBG=-g

all: $(NAME)

$(NAME): libft $(OBJ)
	$(CC) $(LFLAGS) $(OBJ) -o $(NAME) $(LIBS) $(DBG)

%.o:%.c
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@ $(DBG)

libft:
	$(MAKE) -C ./libft

clean:
	$(MAKE) clean -C ./libft
	rm -rf $(COMPILED_OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re: fclean all

.PHONY: all libft clean fclean re
