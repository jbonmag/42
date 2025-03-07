# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: <tu_usuario> <tu_email>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 19:00:00 by <tu_usuario>      #+#    #+#              #
#    Updated: 2025/03/04 00:30:04 by jubonet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= get_next_line.a

CC		= cc
CFLAGS	= -Wall -Werror -Wextra

SRC		= get_next_line.c get_next_line_utils.c
OBJ		= $(SRC:.c=.o)

BONUS_SRC	= get_next_line_bonus.c get_next_line_utils_bonus.c
BONUS_OBJ	= $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

