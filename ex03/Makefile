NAME = interface

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

all : $(NAME)

$(NAME):
		@clang++ $(CFLAGS) main.cpp \
		AMateria.cpp \
		Character.cpp \
		MateriaSource.cpp \
		Cure.cpp \
		Ice.cpp \
		-o $(NAME)

clean:

fclean:
	@rm -rf $(NAME)

re: fclean all