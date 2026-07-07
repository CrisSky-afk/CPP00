NAME = megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Colors
RESET = \033[0m
GREEN = \033[1;32m
YELLOW = \033[1;33m
RED = \033[1;31m

# Files
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)[CPP00]$(RESET) Linking objects..."
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)[OK]$(RESET) $(NAME) compiled successfully."

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "$(RED)[CLEAN]$(RESET) Object files removed."

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)[FCLEAN]$(RESET) '$(NAME)' removed."

re: fclean all

.PHONY: all clean fclean re