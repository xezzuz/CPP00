# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/07 12:43:45 by nazouz            #+#    #+#              #
#    Updated: 2024/07/04 17:20:26 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			Account

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			Account.hpp

SRCS			=			Account.cpp tests.cpp

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
