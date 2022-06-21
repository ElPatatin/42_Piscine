CFLAGS:= -Wall -Werror -Wextra

NAME = rush-02
MAIN_DICTIONARY = numbers.dict

$(NAME):
	@gcc -Wall -Werror -Wextra main.c -o $(NAME)

clean:
	@find . -name $(NAME) -delete

fclean:
	@find data -data /.dict -not -name $(MAIN_DICTIONARY) -delete
