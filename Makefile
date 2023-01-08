#target: dependencies
#		action

SRCS		= ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_unsigned.c \
		  	ft_hexa.c ft_printf.c ft_pointer_adress.c

OBJS		= $(SRCS:.c=.o)

CC		= cc

RM		= rm -f

FLAGS		= -Wall -Wextra -Werror

NAME		= libftprintf.a

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re
