NAME	= megaphone

SRC		= megaphone.cpp

OBJS	= $(SRC:.cpp=.o)

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

.c.cpp:
	$(cXX) $(CXXFLAGS) -cpp $< -o $(<:.cpp=.o)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all
