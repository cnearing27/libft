# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnearing <cnearing@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/22 14:37:16 by cnearing          #+#    #+#              #
#    Updated: 2021/10/22 14:37:16 by cnearing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c\
		 ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c\
		  ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		  ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
		  ft_substr.c ft_tolower.c ft_toupper.c ft_isalpha.c \
		  ft_isascii.c
OBJS = ${patsubst %.c, %.o, ${SRCS}}
BONUS_SRCS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
				ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
				ft_lstnew.c ft_lstsize.c
BONUS_OBJS = ${patsubst %.c, %.o, ${BONUS_SRCS}}
CC = gcc
FLAG = -Wall -Wextra -Werror -I.
RM = rm -f
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(FLAG) -c $< -o $@

clean:
	$(RM) *.o
 
fclean:	clean
	$(RM) $(NAME)

re:	clean all

bonus: $(OBJS) $(BONUS_OBJS)
		$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:	all clean fclean re bonus
