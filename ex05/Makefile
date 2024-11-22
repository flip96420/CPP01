# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pschmunk <pschmunk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 13:17:24 by pschmunk          #+#    #+#              #
#    Updated: 2024/11/22 13:18:54 by pschmunk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

CPP_01 = harl_2

CPP_01_SRC =	./main.cpp		\
				./Harl.cpp		\

CPP_01_OBJ = $(CPP_01_SRC:.cpp=.o)

all: $(CPP_01)

$(CPP_01): $(CPP_01_OBJ) $(LIBFT)
	$(CPP) $(CPPFLAGS) $(CPP_01_OBJ) $(LIBFT) -o harl_2

clean:
	$(RM) $(CPP_01_OBJ)
fclean: clean
	$(RM) $(CPP_01)
re: fclean all

.PHONY : all clean fclean re