# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amtouham <amtouham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 20:52:54 by amtouham          #+#    #+#              #
#    Updated: 2023/02/28 21:30:43 by amtouham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libftprintf.a

CC 		= 	cc

FLAGS 	= 	-Wall -Werror -Wextra

CFILES 	= 	ft_printf.c ft_printf_utils.c

OFILES 	= 	${CFILES:.c=.o}

all : ${NAME}

${NAME} : ${OFILES}
	@ar -crs ${NAME} ${OFILES}
	@echo "\033[33;1m😎  done making\033[0m"
	@echo "\033[17;35m                                                            \n\
	 █████╗ ███╗   ███╗████████╗ ██████╗ ██╗   ██╗██╗  ██╗ █████╗ ███╗   ███╗	\n\
	██╔══██╗████╗ ████║╚══██╔══╝██╔═══██╗██║   ██║██║  ██║██╔══██╗████╗ ████║	\n\
	███████║██╔████╔██║   ██║   ██║   ██║██║   ██║███████║███████║██╔████╔██║	\n\
	██╔══██║██║╚██╔╝██║   ██║   ██║   ██║██║   ██║██╔══██║██╔══██║██║╚██╔╝██║	\n\
	██║  ██║██║ ╚═╝ ██║   ██║   ╚██████╔╝╚██████╔╝██║  ██║██║  ██║██║ ╚═╝ ██║	\n\
	╚═╝  ╚═╝╚═╝     ╚═╝   ╚═╝    ╚═════╝  ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝     ╚═╝	\n\
                                                                       	 		\033[0m"
	@echo "                                                      By: Amal Touhami"

%.o:%.c ft_printf.h
	@${CC} -c ${FLAGS} $<

clean	:
	@rm -rf ${OFILES}
	@echo "\033[32m✅  object files removed successfully.\033[0m"

fclean	: clean
	@rm -rf ${NAME}
	@echo "\033[32m✅  object files and archive removed successfully.\033[0m"
	@echo "\033[33;1m😎  done cleaning\033[0m"

re		: fclean all

.PHONY: clean fclean re all