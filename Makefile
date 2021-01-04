_RED		=	\e[31m
_GREEN		=	\e[32m
_YELLOW		=	\e[33m
_BLUE		=	\e[34m
_END		=	\e[0m

# ifndef VERBOSE
# .SILENT:
# endif

NAME = ft_ping
CC = gcc -Wall -Wextra -Werror # -g3 -fsanitize=address
RM = rm -rf

DHEADERS = ./inc/
DSRCS	= ./srcs/
DOBJS	= ./comp/

HEADERS = ./inc/* # Header Recompilation - https://stackoverflow.com/questions/35676039/makefile-rebuild-with-modified-header-files 

SRCS = main.c utils.c
OBJS = $(SRCS:%.c=$(DOBJS)%.o)

all: $(NAME)

# run: all
# 	@printf "\033c"
# 	@./$(NAME) 

# test: all
# 	@printf "\033c"
# 	@./$(NAME) 

$(NAME): $(OBJS) $(HEADERS)
	$(CC) -I $(DHEADERS) $(OBJS) -o $(NAME) 

$(OBJS): | $(DOBJS)

$(DOBJS):
	mkdir $(DOBJS)

$(DOBJS)%.o: $(DSRCS)%.c
	$(CC) -I $(DHEADERS) -c $< -o $@

clean:
	$(RM) $(DOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean re fclean