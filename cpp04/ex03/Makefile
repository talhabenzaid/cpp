NAME	= a.out

SRCS	= AMateria.cpp  Character.cpp  Cure.cpp  Ice.cpp  main.cpp  MateriaSource.cpp

OBJS	= $(SRCS:.cpp=.o)

FLAGS	= -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $@

%.o: %.cpp AMateria.hpp  Character.hpp  Cure.hpp  Ice.hpp  ICharacter.hpp  IMateriaSource.hpp  MateriaSource.hpp
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all