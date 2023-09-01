# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thrattan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/25 11:21:56 by thrattan          #+#    #+#              #
#    Updated: 2023/06/26 16:13:44 by thrattan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = get_file.c pre_make_struct.c make_struct.c main.c
INCS = include
OBJS = ${SRCS:.c=.o}
NAME = rush-02
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: ${NAME}
${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}
clean:
	${RM} ${OBJS}
fclean: clean	
	${RM} ${NAME}
re: fclean all
.PlHONY: all clean fclean re .c.o