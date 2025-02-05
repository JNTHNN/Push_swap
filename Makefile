# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgasparo <jgasparo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 14:01:23 by jgasparo          #+#    #+#              #
#    Updated: 2023/10/12 14:38:29 by jgasparo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     := push_swap
CC       := gcc
FLAGS    := -Wall -Wextra -Werror 

SRCS        :=      ft_algo.c \
					ft_atoi.c \
					ft_check.c \
					ft_error.c \
					ft_finder.c \
					ft_initialize.c \
					ft_list.c \
					ft_push.c \
					ft_reverse_rotate.c \
					ft_rotate.c \
					ft_split.c \
					ft_swap.c \
					main.c \
					
OBJS        := $(SRCS:.c=.o)

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

RM		    := rm -f

${NAME}:	${OBJS}
			${CC} ${FLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
