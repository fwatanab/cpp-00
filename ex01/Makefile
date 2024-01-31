NAME	= phonebook

SRC		= main.cpp Phonebook.cpp prompt.cpp add_prompt.cpp Contact.cpp

OBJS	= $(SRC:.cpp=.o)

CXX			= g++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all
