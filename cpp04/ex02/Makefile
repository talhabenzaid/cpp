NAME	= Animal

SRCS	=  main.cpp Animal.cpp  Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

OBJS	= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $@

%.o: %.cpp Animal.hpp  Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp Brain.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all