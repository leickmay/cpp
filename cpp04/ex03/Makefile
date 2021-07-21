INCLUDES =	AMateria.hpp\
			Character.hpp\
			Cure.hpp\
			Ice.hpp\
			ICharacter.hpp\
			IMateriaSource.hpp\
			MateriaSource.hpp

SRCS =	AMateria.cpp\
		Character.cpp\
		Cure.cpp\
		Ice.cpp\
		MateriaSource.cpp\
		main.cpp

NAME = Interfacerecap

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