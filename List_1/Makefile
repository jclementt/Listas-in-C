NAME	= struct_list.a

SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		  ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c \
		  ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS 	= ${SRCS:.c=.o}

CC 		= cc
RM		= rm -f

FLAGS	= -Wall -Wextra -Werror

.c.o:		${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

all:		${NAME}

clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

