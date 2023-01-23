NAME = push_swap

SRC = main.c

OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h
RM = rm -f
LIBFT_PATH = libft/
FT_PRINTF_PATH = ft_printf/
LIBFT_A = libft/libft.a
FT_PRINTF_A = ft_printf/libftprintf.a

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

all : LIBFT FT_PRINTF $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT_A) $(FT_PRINTF_A)

LIBFT :
	@make -C $(LIBFT_PATH)

FT_PRINTF :
	@make -C $(FT_PRINTF_PATH)

clean :
	@make -C $(LIBFT_PATH) clean
	@make -C $(FT_PRINTF_PATH) clean
	$(RM) $(OBJ)

fclean :
	@make -C $(LIBFT_PATH) fclean
	@make -C $(FT_PRINTF_PATH) fclean
	$(RM) $(NAME)

re : fclean all
