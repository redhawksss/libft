# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epozuelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/26 10:25:06 by epozuelo          #+#    #+#              #
#    Updated: 2021/04/06 12:05:38 by epozuelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =libft.a
CC =gcc 
Flags =-Wall -Wextra -Werror
Src = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_memchr.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strdup.c ft_calloc.c ft_substr.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c ft_strjoin.c ft_putendl_fd.c ft_strtrim.c ft_strmapi.c ft_itoa.c ft_split.c

RM		= rm -f

OBJ = $(Src:.c=.o)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	$(CC) -I. -o $@ -c $? $(Flags)

all: $(NAME) 

clean:
			${RM} ${OBJ} 

fclean:		clean
			 ${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
