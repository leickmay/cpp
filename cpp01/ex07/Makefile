
SRCS =	main.cpp \


NAME = replace

CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS)
			$(CC) -o $(NAME) $(SRCS)

all :	$(NAME)

clean : 
			rm -rf $(OBJS)

fclean :
			rm -rf $(OBJS) $(NAME)

re :		fclean all