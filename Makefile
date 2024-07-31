NAME = libftprintf.a
CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c ft_putunbr.c ft_putxnbr.c ft_putxptr.c ft_putXmnbr.c ft_printf_func.c ft_pfputstr.c ft_pfputnbr.c ft_pfflags.c ft_pfputchar.c ft_pfputnbr_aux.c
SRCBONUS = ft_printf_bonus.c ft_putunbr_bonus.c ft_putxnbr_bonus.c ft_putxptr_bonus.c ft_putXmnbr_bonus.c ft_printf_func_bonus.c ft_pfputstr_bonus.c ft_pfputnbr_bonus.c ft_pfflags_bonus.c ft_pfputchar_bonus.c ft_pfputnbr_aux_bonus.c
OBJ = $(SRC:.c=.o)
OBJBONUS = $(SRCBONUS:.c=.o)
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJ)
	
$(LIBFT):
	make -C $(LIBFT_PATH) all

bonus: $(OBJ) $(OBJBONUS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJBONUS)

%.o: %.c
	$(CC) -c $(CFLAGS) $^ -o $@

clean:
	make -C $(LIBFT_PATH) clean
	$(RM) $(OBJ) $(OBJBONUS)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	$(RM) $(NAME)

re: fclean all