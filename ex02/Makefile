.PHONY:	all re clean fclean distclean
.SUFFIX: .cpp .o

NAME :=	brain

SRCS :=	main.cpp \

INCS :=

CXX :=	c++

LD := $(CXX)

CXX_FLAGS := -g3 -Wall -Wextra -Werror -std=c++98
LD_FLAGS := -g3 -Wall -Wextra -Werror -std=c++98

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
