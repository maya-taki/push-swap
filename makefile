# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/10 03:37:57 by mtakiyos          #+#    #+#              #
#    Updated: 2025/12/30 18:59:47 by mtakiyos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= cc
RM 			= rm -f
FLAGS		= -I$(INCLUDE) -Wall -Wextra -Werror


INCLUDE		= include/
SRC_DIRS	= src
OBJ_DIR		= build
INCLUDE_LIB	= $(foreach dir,$(LIBFT), -I$(dir))

LIBFT		= ./libft/libft.a


YELLOW		= \033[33m
RED			= \033[31m
GREEN		= \033[32m
BLUE		= \033[34m
END			= \033[0m

SRCS		= $(shell find $(SRC_DIRS) -name "*.c")
OBJS		= $(patsubst %.c,$(OBJ_DIR)/%.c,$(SRC))

# Rules
all: $(NAME)

${NAME}: ${OBJS} $(LIBFT)
	@echo "$(YELLOW)🔧 Linking objects...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJ) $(LIBFT_FLAGS) -o $(NAME)
	@echo "$(GREEN)✅ $(NAME) built successfully!$(RESET)"

#ar rcs $@ $^

$(OBJ_DIR):/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) $(INCLUDE_LIB) -c $< -o $@

$(LIBFT):
	@echo "$(YELLOW) Building libft...$(RESET)"
	@$(MAKE) -C ./libft --silent
	@echo "$(GREEN) Libft succesfully created!$(RESET)"

clean:
	@$(RM) $(OBJ_DIR)
	@$(MAKE) clean -C ./libft --silent
	@echo "$(RED) Object files deleted.$(RESET)"
	
fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED) Deleted everything!$(RESET)"

re: fclean all

norminette:
	@echo "$(YELLOW) Running norminette...$(RESET)"
	@norminette $(SRC) -R CheckForbiddenSourceHeader || true

.PHONY:	all clean fclean re norminette