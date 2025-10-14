NAME    = Bureaucrat

SRCS    =  main.cpp Bureaucrat.cpp 

OBJS    = $(SRCS:.cpp=.o)

FLAGS   = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
		c++ $(FLAGS) $(OBJS) -o $@

%.o: %.cpp Bureaucrat.hpp
		c++ $(FLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all