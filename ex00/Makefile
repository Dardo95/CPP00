NAME = megaphone
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): megaphone.cpp
	$(CXX) $(CXXFLAGS) $< -o $(NAME)

clean:
	rm -f $(NAME)

.PHONY: all clean
