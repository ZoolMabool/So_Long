# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/14 12:20:41 by ybaudoui          #+#    #+#              #
#    Updated: 2022/07/05 16:21:49 by ybaudoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= so_long

MANDATORY = main.c size_map.c texture_map.c check_map.c put_perso.c put_chest.c event.c \
put_chest_empty.c check_event_a_d.c file_to_image.c check_event_w_s.c check_error.c

SRCS	= move.c

SRCS_BONUS = move_bonus.c

OBJS_MAND	= $(MANDATORY:.c=.o)

OBJS	= $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o) 

LIB_FLAGS = -Llibft -Lmlx_linux

MLX_FLAGS = -lm -lmlx -lXext -lX11

CC		= gcc

ifdef BONUS
	SRCS = 
	SRCS += $(SRCS_BONUS)
endif

.c.o:
		$(CC) -Wall -Wextra -Werror -Ilibft -Imlx_linux -Llibft -lft -g -c $< -o $@

$(NAME):	$(OBJS) $(OBJS_MAND)
			make -sC libft
			make -sC mlx_linux
			$(CC) $(LIB_FLAGS) $(OBJS) $(OBJS_MAND) -o $(NAME) $(MLX_FLAGS) -g -Llibft -lft

all :	$(NAME)

bonus : 
		make BONUS=1
		

clean : 
		rm -f $(OBJS) $(OBJS_BONUS) $(OBJS_MAND)
		make -sC libft clean
		make -sC mlx_linux clean
	
fclean : clean
		rm -f $(NAME)
		make -sC libft fclean

re : fclean all 

