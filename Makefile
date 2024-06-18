# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbelotti <marvin@42perpignan.fr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 10:53:01 by fbelotti          #+#    #+#              #
#    Updated: 2024/06/18 16:30:10 by fbelotti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
AUTHOR = Florent Belotti

CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEBUG_FLAGS = -g -O0

SRCDIR = Src
BONUSDIR = Bonus
INCDIR = includes
OBJDIR = Obj
CUSTOMDIR = Custom

SRC = $(shell find $(SRCDIR) -name \*.c -type f -print)
BONUS = $(shell find $(BONUSDIR) -name \*.c -type f -print)
CUSTOM = $(shell find $(CUSTOMDIR) -name \*.c -type f -print)

OBJ_SRC = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))
OBJ_BONUS = $(patsubst $(BONUSDIR)/%.c,$(OBJDIR)/%.o,$(BONUS))
OBJ_CUSTOM = $(patsubst $(CUSTOMDIR)/%.c,$(OBJDIR)/%.o,$(CUSTOM))

OBJ = $(OBJ_SRC) $(OBJ_BONUS) $(OBJ_CUSTOM)

DEPS = $(OBJ:.o=.d)

INCLUDES = -I$(INCDIR)

all: intro $(NAME)

intro:
	@echo "\n==================================="
	@echo "Compiling:	$(NAME)"
	@echo "Author:		$(AUTHOR)"
	@echo "===================================\n"

$(NAME): $(OBJ_SRC) $(OBJ_BONUS) $(OBJ_CUSTOM)
	@ar rcs $@ $(OBJ)
	@echo "\nlibft: Library $@ created.\n"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	@echo libft:	Src:	compiling file $@
	@$(CC) $(CFLAGS) $(INCLUDES) -MMD -c $< -o $@

$(OBJDIR)/%.o: $(BONUSDIR)/%.c
	@mkdir -p $(OBJDIR)
	@echo libft:	Bonus:	compiling file $@
	@$(CC) $(CFLAGS) $(INCLUDES) -MMD -c $< -o $@

$(OBJDIR)/%.o: $(CUSTOMDIR)/%.c
	@mkdir -p $(OBJDIR)
	@echo libft:	Custom:	compiling file $@
	@$(CC) $(CFLAGS) $(INCLUDES) -MMD -c $< -o $@

-include $(DEPS)

clean:
	@echo "libft:	clean:	Cleaning object files..."
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "libft:	fclean:	Cleaning all build files..."
	@rm -f $(NAME)

re: fclean all

debug: CFLAGS += $(DEBUG_FLAGS)
debug: re

.PHONY: all clean fclean re debug intro message_src message_bonus message_custom
