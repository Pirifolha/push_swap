NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT = libft/libft.a
PRINTF = ft_printf/libftprintf.a

INCLUDES = -I. -Ilibft -Ift_printf

SRCS =	push_swap.c srcs/swap.c srcs/push.c srcs/rotate.c srcs/rrotate.c srcs/parser.c

OBJS = $(SRCS:.c=.o)

all: $(LIBFT) $(PRINTF) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(PRINTF) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	make -C libft

$(PRINTF):
	make -C ft_printf

clean:
	rm -f $(OBJS)
	make -C libft clean
	make -C ft_printf clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean
	make -C ft_printf fclean

re: fclean all

.PHONY: all clean fclean re