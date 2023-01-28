# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsirikam <bsirikam@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/28 15:33:01 by bsirikam          #+#    #+#              #
#    Updated: 2023/01/29 02:38:59 by bsirikam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c ft_check_arg.c ft_lst_mai.c ft_add_back.c ft_lst_last.c \
ft_check_same.c ft_swap_a.c ft_swap_b.c

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

all :  $(NAME)

$(NAME) : libft ft_printf $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT_A) $(FT_PRINTF_A)

libft :
	@make -C $(LIBFT_PATH) 1> /dev/null

ft_printf :
	@make -C $(FT_PRINTF_PATH) 1> /dev/null

norm :
	@say "Check norm bab mai greng jei kai"
	@norminette -R CheckForbiddenSourceHeader $(LIBFT_PATH)*.c
	@norminette -R CheckDefine $(LIBFT_PATH)*.h
	@norminette -R CheckForbiddenSourceHeader $(FT_PRINTF_PATH)*.c
	@norminette -R CheckDefine $(FT_PRINTF_PATH)*.h
	@norminette -R CheckForbiddenSourceHeader $(SRC)


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
.PHONY:libft ft_printf
