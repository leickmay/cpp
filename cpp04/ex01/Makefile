INCLUDES =	Animal.hpp\
			Dog.hpp\
			Cat.hpp\
			Brain.hpp

SRCS =	Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		Brain.cpp\
		main.cpp

NAME = Polymorphism

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
		$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS) $(INCLUDES)
			$(CC) -o $(NAME) $(SRCS)

all :	$(NAME)

clean : 
			rm -rf $(OBJS)

fclean :
			rm -rf $(OBJS) $(NAME)

re :		fclean all