# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/23 21:29:48 by fde-jesu          #+#    #+#              #
#    Updated: 2023/04/23 21:30:56 by fde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
OPTION = -c -I $(HEADER)
FLAGS = -Wall -Werror -Wextra
FUN = ft_isalpha.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isascii.c \
      ft_isprint.c \
      ft_strlen.c \
      ft_memset.c \
      ft_bzero.c \
      ft_memmove.c \
      ft_memcpy.c \
      ft_strlcpy.c \
      ft_toupper.c \
      ft_tolower.c \
      ft_strchr.c \
      ft_split.c \
      ft_substr.c \
      ft_strmapi.c \
      ft_striteri.c \
      ft_putchar_fd.c \
      ft_putstr_fd.c \
      ft_putendl_fd.c \
      ft_putnbr_fd.c \
      ft_itoa.c 

BONUS_FUN = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstclear.c ft_lstdelone.c \
			ft_lstiter.c ft_lstmap.c
OBJ = ${FUN:.c=.o}
OBJ_BONUS = ${BONUS_FUN:.c=.o}

all: $(NAME)
$(NAME):
	cc -g $(FLAGS) $(OPTION) $(FUN) $(BONUS_FUN)
	ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
clean:
	rm -f $(OBJ)
	rm -f $(OBJ_BONUS)
fclean: clean
	rm -f $(NAME)
re: fclean all