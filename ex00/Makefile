.PHONY:	all re clean fclean distclean
.SUFFIX: .cpp .o

NAME :=	zombies

SRCS :=	main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp

INCS := Zombie.hpp

CXX :=	c++

LD := $(CXX)

CXX_FLAGS := -Wall -Wextra -Werror -std=c++98
LD_FLAGS := -Wall -Wextra -Werror -std=c++98

OBJS :=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	$(LD) $(LD_FLAGS) -o $@ $(OBJS)

%.o: %.cpp	$(INCS)
	$(CXX) $(CXX_FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean:		clean
	rm -f $(NAME)

distclean:	fclean

re: distclean all
