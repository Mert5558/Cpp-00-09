CPP = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++17
TARGET = megaphone

all: $(TARGET)

$(TARGET): $(TARGET).o
	$(CPP) $(CPPFLAGS) -o $(TARGET) $(TARGET).o

$(TARGET).o: $(TARGET).cpp
	$(CPP) $(CPPFLAGS) -c $(TARGET).cpp

clean:
	rm -f $(TARGET).o

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re

