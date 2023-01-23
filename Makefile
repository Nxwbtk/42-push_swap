NAME = push_swap

SRC = main.c

OBJ_C = $(SRC:.c=.o)
OBJ_DIR = obj
OBJ := $(addprefix $(OBJ_DIR)/, $(OBJ_C))
CC = gcc
CFLAGS = -Wall -Wextra -Werror
HEADER = push_swap.h
RM = rm -f
LIBFT_PATH = libft/
FT_PRINTF_PATH = ft_printf/
LIBFT_A = libft/libft.a
FT_PRINTF_A = ft_printf/libftprintf.a

$(OBJ_DIR)/%.o: %.c $(HEADER)
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

all : LIBFT FT_PRINTF $(NAME)

$(NAME) : $(OBJ)
	@norminette -R CheckForbiddenSourceHeader $(SRC)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT_A) $(FT_PRINTF_A)

LIBFT :
	@norminette -R CheckForbiddenSourceHeader $(LIBFT_PATH)
	@make -C $(LIBFT_PATH) 1> /dev/null

FT_PRINTF :
	@norminette -R CheckForbiddenSourceHeader $(FT_PRINTF_PATH)
	@make -C $(FT_PRINTF_PATH) 1> /dev/null

clean :
	@make -C $(LIBFT_PATH) clean
	@make -C $(FT_PRINTF_PATH) clean
	@$(RM) $(OBJ)

fclean :
	@make -C $(LIBFT_PATH) fclean
	@make -C $(FT_PRINTF_PATH) fclean
	@rm -rf $(OBJ_DIR)
	@$(RM) $(NAME)

re : fclean all
