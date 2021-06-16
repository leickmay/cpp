SRCS = megaphone.cpp

NAME = megaphone

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
		$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(SRCS)

all :	$(NAME)

clean : 
			rm -rf $(OBJS)

fclean :
			rm -rf $(OBJS) $(NAME)

re :		fclean all