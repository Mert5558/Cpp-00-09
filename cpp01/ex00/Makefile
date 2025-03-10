CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = zombie
SRC = main.cpp \
      Zombie.cpp \
      newZombie.cpp \
      randomChump.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

