# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jubonet- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/11 22:46:12 by jubonet-          #+#    #+#              #
#    Updated: 2025/02/11 23:21:29 by jubonet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror

SRCS = ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putstr.c ft_putptr.c \
       ft_putunsigned.c ft_putnbr.c

OBJS = $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) all

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS) $(LIBFT)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

bonus: $(LIBFT)
	$(MAKE) -C $(LIBFT_DIR) bonus

norm:
	@norminette

.PHONY: all clean fclean re norm bonus
