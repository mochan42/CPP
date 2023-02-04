# **************************************************************************** #
# VARIABLES

NAME				:= phonebook

MACHINE				:= $(shell uname -s)

CC					:= c++
CFLAGS				:= -Wall -Wextra -Werror -std=c++98
RM					:= rm -rf
INCS				:= -I .

# **************************************************************************** #
# COLORS

GREEN				:= \033[0;92m
YELLOW				:= \033[0;93m
BLUE				:= \033[0;94m
END_COLOR			:= \033[0;39m

# **************************************************************************** #
# SOURCES

SRC_FILES			:=	PhoneBook.cpp Contact.cpp main.cpp\

OBJ_FILES			:= ${SRC_FILES:.cpp=.o}

# **************************************************************************** #
# RULES

all : $(NAME)

$(NAME): $(OBJ_FILES)
ifeq ($(MACHINE), Darwin)
	$(CC) $(CFLAGS) $(INCS) $(OBJ_FILES) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled :)$(END_COLOR)"
# -C	:	make option that tells make to change directory before execution.
else
	$(CC) $(CFLAGS) $(INCS) $(OBJ_FILES) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled :)$(END_COLOR)"
# -C	:	make option that tells make to change directory before execution.
endif


clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	@echo "$(GREEN) Cleaned all and rebuild $(NAME)!$(END_COLOR)"

.PHONY: all clean fclean re
