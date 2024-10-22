NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = \
    ./src/assert.c \
    ./src/ft_isalpha.c \
    ./src/ft_isdigit.c \
    ./src/ft_isascii.c \
    ./src/ft_isalnum.c \
    ./src/ft_isprint.c \
    ./src/ft_isspace.c \
    ./src/ft_memset.c \
    ./src/ft_bzero.c \
    ./src/ft_memcpy.c \
    ./src/ft_memccpy.c \
    ./src/ft_memmove.c \
    ./src/ft_memchr.c \
    ./src/ft_memcmp.c \
    ./src/ft_strlen.c \
    ./src/ft_strnew.c \
    ./src/ft_strdup.c \
    ./src/ft_strncpy.c \
    ./src/ft_strcpy.c \
    ./src/ft_strcat.c \
    ./src/ft_strncat.c \
    ./src/ft_strlcpy.c \
    ./src/ft_strlcat.c \
    ./src/ft_strchr.c \
    ./src/ft_strrchr.c \
    ./src/ft_strstr.c \
    ./src/ft_strnstr.c \
    ./src/ft_strcmp.c \
    ./src/ft_strncmp.c \
    ./src/ft_tolower.c \
    ./src/ft_toupper.c \
    ./src/ft_atoi.c \


TEST_SRC = \
	./test/ft_isalpha.test.c \
	./test/ft_isdigit.test.c \
	./test/ft_isascii.test.c \
	./test/ft_isalnum.test.c \
	./test/ft_isprint.test.c \
	./test/ft_memset.test.c \
	./test/ft_bzero.test.c \
	./test/ft_memcpy.test.c \
	./test/ft_memmove.test.c \
	./test/ft_memchr.test.c \
	./test/ft_memcmp.test.c \
	./test/ft_strlen.test.c \
	./test/ft_strnew.test.c \
	./test/ft_strdup.test.c \
	./test/ft_strncpy.test.c \
	./test/ft_strcpy.test.c \
	./test/ft_strcat.test.c \
	./test/ft_strncat.test.c \
	./test/ft_strlcpy.test.c \
	./test/ft_strlcat.test.c \
	./test/ft_strchr.test.c \
    ./test/ft_strrchr.test.c \
    ./test/ft_strstr.test.c \
    ./test/ft_strnstr.test.c \
    ./test/ft_strcmp.test.c \
    ./test/ft_strncmp.test.c \
    ./test/ft_tolower.test.c \
    ./test/ft_toupper.test.c \
    ./test/ft_atoi.test.c \

OBJ_DIR = ./obj

OBJ = $(SRC:./src/%.c=$(OBJ_DIR)/%.o)

TEST_BIN_DIR = ./test/bin

TEST_EXEC = $(TEST_SRC:./test/%.test.c=$(TEST_BIN_DIR)/%.test)


all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: ./src/%.c | $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@ -I./libft.h

$(TEST_BIN_DIR):
	mkdir -p $(TEST_BIN_DIR)

$(TEST_BIN_DIR)/%.test: ./test/%.test.c $(NAME) $(TEST_SRC) | $(TEST_BIN_DIR)
	$(CC) $(FLAGS) $< -o $@ libft.a

.PHONY: clean fclean re test

test: $(TEST_EXEC)
	sh test.sh

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(TEST_EXEC)

re: fclean $(NAME)
