# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 18:31:34 by nazouz            #+#    #+#              #
#    Updated: 2024/07/04 12:02:39 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			PhoneBook

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			PhoneBook.hpp Contact.hpp

SRCS			=			PhoneBook.cpp Contact.cpp main.cpp

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
