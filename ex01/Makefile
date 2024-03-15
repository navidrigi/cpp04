CXX			=		c++
CXXFLAGS	=		-Wall -Wextra -Werror -std=c++98
SRC			=		$(wildcard *.cpp)
HDR			=		$(wildcard *.hpp)
NAME		=		brain

all: $(NAME)

$(NAME) : $(SRC) $(HDR)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

re: clean all

.PHONY : all clean re
