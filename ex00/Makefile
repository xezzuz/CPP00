# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 14:18:14 by nazouz            #+#    #+#              #
#    Updated: 2024/07/04 11:59:56 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			megaphone

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			megaphone.hpp

SRCS			=			megaphone.cpp

OBJS			=			$(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp $(INCLUDES)
	$(CPP) -c $(CPPFLAGS) $< -o $@

$(NAME) : $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
