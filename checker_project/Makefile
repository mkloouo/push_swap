# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 20:46:58 by modnosum          #+#    #+#              #
#    Updated: 2018/08/16 20:56:36 by modnosum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR		:= source
INC_DIR		:= include
OBJ_DIR		:= build

SRC_EXT		:= c
OBJ_EXT		:= o

include ../libft/Project.mk

CC			:= cc
CFLAGS		:= -Wall -Werror -Wextra -pedantic
IFLAGS		+= -I $(INC_DIR)
LFLAGS		+=

NAME		:= checker

SRCS		:= $(shell find $(SRC_DIR) -type f -name *.$(SRC_EXT))
OBJS		:= $(patsubst $(SRC_DIR)%.$(SRC_EXT),$(OBJ_DIR)%.$(OBJ_EXT),$(SRCS))

RESET_COLOR	?= \e[0m
RED_COLOR	?= \e[31m
GREEN_COLOR	?= \e[32m

.MAIN: all
.PHONY: all fclean clean re

all: $(NAME)

clean:
	@rm -Rf $(OBJ_DIR)
	@printf "$(RED_COLOR)%-30s\n$(RESET_COLOR)" "Removed $(OBJ_DIR)"

fclean: clean
	@rm -Rf $(NAME)
	@printf "$(RED_COLOR)%-30s\n$(RESET_COLOR)" "Removed $(NAME)"

re: clean all

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)/%.$(OBJ_EXT): $(SRC_DIR)/%.$(SRC_EXT) | $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(IFLAGS) $(CFLAGS)
	@printf "%-30s -> %s\n" $< $@

$(NAME): $(OBJS)
	@$(CC) -o $@ $^ $(LFLAGS) $(IFLAGS) $(CFLAGS)
	@printf "$(GREEN_COLOR)%-30s\n$(RESET_COLOR)" "Built $(NAME)"
