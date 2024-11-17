# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 03:03:11 by codespace         #+#    #+#              #
#    Updated: 2024/11/17 12:52:48 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

CPP_01 = moar_brainz

CPP_01_SRC =	./main.cpp			\
				./Zombie.cpp		\
				./zombieHorde.cpp	\

CPP_01_OBJ = $(CPP_01_SRC:.cpp=.o)

all: $(CPP_01)

$(CPP_01): $(CPP_01_OBJ) $(LIBFT)
	$(CPP) $(CPPFLAGS) $(CPP_01_OBJ) $(LIBFT) -o moar_brainz

clean:
	$(RM) $(CPP_01_OBJ)
fclean: clean
	$(RM) $(CPP_01)
re: fclean all

.PHONY : all clean fclean re