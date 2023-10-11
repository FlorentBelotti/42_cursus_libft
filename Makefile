# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 10:53:01 by fbelotti          #+#    #+#              #
#    Updated: 2023/10/11 11:08:06 by fbelotti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_strlen.c \
			ft_isascii.c \
			ft_memcpy.c \
			ft_strlcat.c \
			ft_tolower.c \
			ft_bzero.c \
			ft_isdigit.c \
			ft_memmove.c \
			ft_strlcpy.c \
			ft_toupper.c \
			ft_calloc.c \
			ft_isprint.c \
			ft_memset.c \
			ft_strncmp.c \
			ft_isalnum.c \
			ft_memchr.c \
			ft_strchr.c \
			ft_strnstr.c \
			ft_isalpha.c \
			ft_memcmp.c \
			ft_strdup.c \
			ft_strrchr.c \
			ft_atoi.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strmapi.c \
			ft_strtrim.c \
			ft_substr.c \

GCC	=	gcc -Wall -Wextra -Werror

RM	=	rm -f

NAME	=	libft.a

OBJS	=	$(SRCS:.c=.o)

HEADER	=	libft.h

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(GCC) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
