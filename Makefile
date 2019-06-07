# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mjalenqu <mjalenqu@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/06/05 14:20:10 by mjalenqu     #+#   ##    ##    #+#        #
#    Updated: 2019/06/07 08:46:34 by mjalenqu    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #


NAME = hotrace

INC = hotrace.h
SRC =	main.c ft_strjoin.c ft_strdup.c ft_strsub.c\
		ft_strcpy.c ft_strchr.c ft_bzero.c ft_putendl.c algo.c ft_strcmp.c lecteur.c\
		ft_strcat.c ft_strsplit.c

FLAG += -Wall -Werror -Wextra -O3 -g3 #-fsanitize=address
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ) Makefile
	gcc $(FLAG) -o $@ $(OBJ) -Iincludes

%.o: %.c hotrace.h
	gcc $(FLAG) -o $@ -c $< -Iincludes

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all