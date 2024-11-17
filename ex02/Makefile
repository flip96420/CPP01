# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 03:03:11 by codespace         #+#    #+#              #
#    Updated: 2024/11/17 13:17:11 by codespace        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

CPP_01 = hi_this_is_brain

CPP_01_SRC =	./main.cpp			\

CPP_01_OBJ = $(CPP_01_SRC:.cpp=.o)

all: $(CPP_01)

$(CPP_01): $(CPP_01_OBJ) $(LIBFT)
	$(CPP) $(CPPFLAGS) $(CPP_01_OBJ) $(LIBFT) -o hi_this_is_brain

clean:
	$(RM) $(CPP_01_OBJ)
fclean: clean
	$(RM) $(CPP_01)
re: fclean all

.PHONY : all clean fclean re