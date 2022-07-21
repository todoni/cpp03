CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = claptrap
SRCS = main.cpp ClapTrap.cpp 
OBJS = $(SRCS:.cpp=.o)

#%.o : %.cc
#	$(CXX) $(CXXFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS)
	rm -f $(NAME)
re :
	rm -f $(OBJS)
	rm -f $(NAME)
	make $(NAME)

.PHONY : all clean fclean re
