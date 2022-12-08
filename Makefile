#target: dependencies
#		action

SRCS		= *.c

OBJS		= $(SRCS:.c=.o)

CC		= gcc

RM		= rm -f

FLAGS		= -Wall -Wextra -Werror

NAME		= libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re bonus
