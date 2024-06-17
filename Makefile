# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 10:53:01 by fbelotti          #+#    #+#              #
#    Updated: 2024/06/17 22:54:07 by fbelotti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = Src
BONUSDIR = Bonus
INCDIR = includes
OBJDIR = Obj
CUSTOMDIR = Custom

SRC = $(wildcard $(SRCDIR)/*.c)
BONUS = $(wildcard $(BONUSDIR)/*.c)
CUSTOM = $(wildcard $(CUSTOMDIR)/*.c)

OBJ =	$(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o) \
		$(BONUS:$(BONUSDIR)/%.c=$(OBJDIR)/%.o) \
		$(CUSTOM:$(CUSTOMDIR)/%.c=$(OBJDIR)/%.o)

INCLUDES = -I$(INCDIR)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	@echo -libft: Source directory compilation...
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJDIR)/%.o: $(BONUSDIR)/%.c
	@mkdir -p $(OBJDIR)
	@echo -libft: Bonus directory compilation...
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJDIR)/%.o: $(CUSTOMDIR)/%.c
	@mkdir -p $(OBJDIR)
	@echo -libft: Custom directory compilation...
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -rf $(OBJDIR)
	@echo -libft: all is clean.

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
