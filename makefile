# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/10 03:37:57 by mtakiyos          #+#    #+#              #
#    Updated: 2025/12/10 09:33:34 by mtakiyos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = ./libft/libft.a

INCLUDE = include/

FLAGS = -I$(INCLUDE) -Wall -Wextra -Werror

RM = rm -f

$(LIBFT):
	@$(MAKE) -C ./libft
