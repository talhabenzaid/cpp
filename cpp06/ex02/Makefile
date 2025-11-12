NAME	= Base

SRCS	=  A.cpp  Alpha.cpp  Base.cpp  B.cpp  C.cpp  main.cpp

OBJS	= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $@

%.o: %.cpp A.hpp  Alpha.hpp  Base.hpp  B.hpp  C.hpp 
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all