INCLUDES =	AWeapon.hpp\
			Character.hpp\
			Enemy.hpp\
			PlasmaRifle.hpp\
			PowerFist.hpp\
			Bazooka.hpp\
			TurboDemon.hpp\
			RadScorpion.hpp\
			SuperMutant.hpp

SRCS =	AWeapon.cpp\
		Character.cpp\
		Enemy.cpp\
		PlasmaRifle.cpp\
		PowerFist.cpp\
		Bazooka.cpp\
		TurboDemon.cpp\
		RadScorpion.cpp\
		SuperMutant.cpp\
		main.cpp

NAME = Abstract

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