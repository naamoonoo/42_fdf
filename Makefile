NAME = fdf
SRC = $(wildcard src/*.c)
OPTIONS = minilibx/
CFLAGS = -Wall -Wextra -Werror -I includes -L src/libft -I minilibx -L minilibx -lmlx -framework OpenGL -framework Appkit
OBJ = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(SRC) minilibx/libmlx.a
	gcc -o $(NAME) $(CFLAGS) $(SRC) src/libft.a

minilibx/libmlx.a:
	cd src/libft && make -f Makefile
	mv src/libft/libft.a src
	cd minilibx && make

clean:
	cd src/libft && make clean
	rm -rf $(NAME)

fclean:
	cd src/libft && make fclean
	cd minilibx && make clean
	rm -rf src/libft.a

re: clean $(NAME)

.PHONY: clean fclean re
