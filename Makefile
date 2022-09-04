NAME		= libftprintf.a
INCLUDES	= include
LIBFT		= libft
MAIN_DIR	= $(shell pwd)
CFLAGS		= -Wall -Wextra -Werror -I
AR			= ar -rcs
RM			= rm -f

SRCS		= ft_printf.c \
				ft_combined.c	\
				ft_unsigned.c	\
				ft_pointer.c	\
				ft_hexa.c

OBJS		= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@make -C $(LIBFT)
			@cp libft/libft.a $(MAIN_DIR)
			@mv libft.a $(NAME)
			$(AR) $(NAME) $(OBJS)


.c.o:
			$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
			$(RM) $(OBJS)
			@make clean -C $(LIBFT)


fclean:		clean
			$(RM) $(NAME)
			$(RM) $(LIBFT)/libft.a

re:			fclean all


.PHONY:		all clean fclean re