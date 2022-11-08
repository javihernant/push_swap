NAME:=push_swap
LIBFT = libft/libft.a
SRC:=checkarg.c \
	 hp_instr.c \
	 hp_instr2.c \
	 hp_instr3.c \
	 hp_instr4.c \
	 exec.c \
	 ft_fill_a.c \
	 ft_push_all_b.c \
	 ft_push_swap.c \
	 st_instr.c \
	 st_instr2.c \
	 st_instr3.c \
	 sort_a.c \
	 ft_push_optimal_a.c \
	 ft_calc_instrs.c \
	 ft_calc_instrs_aux.c \
	 ft_optimize.c \
	 main.c

SRC:=$(addprefix src/,$(SRC))
CHECKER_SRC:=checker.c \
			 exec.c \
			 checkarg.c \
			 st_instr.c \
			 st_instr2.c \
			 st_instr3.c \
			 ft_fill_a.c \
			 hp_instr.c \
			 hp_instr2.c \
			 hp_instr3.c \
			 hp_instr4.c 

CHECKER_SRC:=$(addprefix src/,$(CHECKER_SRC))
CHECKER_OBJ=$(CHECKER_SRC:.c=.o)
COMPILED_OBJS=$(shell find . -name '*.o')
OBJ=$(SRC:.c=.o)
IFLAGS=-I./libft/include -I./include
LFLAGS=-L./libft
LIBS=-lft
DBG=
CFLAGS=-Wall -Wextra -Werror
CC=gcc

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(LFLAGS) $(OBJ) -o $(NAME) $(LIBS) $(DBG)

%.o:%.c
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@ $(DBG)

$(LIBFT):
	$(MAKE) -C ./libft

bonus: $(LIBFT) $(CHECKER_OBJ)
	$(CC) $(CFLAGS) $(LFLAGS) $(CHECKER_OBJ) -o checker $(LIBS) $(DBG)

clean:
	$(MAKE) clean -C ./libft
	rm -rf $(COMPILED_OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)
	rm -rf checker

re: fclean all

.PHONY: all bonus clean fclean re 
