NAME = Intern

CC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
       RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJ	= $(SRC:.cpp=.o)

.cpp.o:
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean
