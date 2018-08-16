# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/16 20:46:58 by modnosum          #+#    #+#              #
#    Updated: 2018/08/16 21:48:10 by modnosum         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR		:= source
INC_DIR		:= include
OBJ_DIR		:= build

SRC_EXT		:= c
OBJ_EXT		:= o

libft_PATH	:= ../libft/
include ../libft/Project.mk

CC			:= gcc
CFLAGS		:= -Wall -Werror -Wextra -pedantic
IFLAGS		+= -I $(INC_DIR)
LFLAGS		+=

MFLAGS		?= --no-print-directory

NAME		:= checker

SRCS		:= $(shell find $(SRC_DIR) -type f -name *.$(SRC_EXT))
OBJS		:= $(patsubst $(SRC_DIR)%.$(SRC_EXT),$(OBJ_DIR)%.$(OBJ_EXT),$(SRCS))
DIRS		:= $(sort $(dir $(OBJS)))

RESET_COLOR	?= \e[0m
RED_COLOR	?= \e[31m
GREEN_COLOR	?= \e[32m

.MAIN: all
.PHONY: all fclean clean re libs

all: $(NAME)

clean:
	@rm -Rf $(OBJ_DIR)
	@printf "$(RED_COLOR)%-30s\n$(RESET_COLOR)" "Removed $(OBJ_DIR)"

fclean: clean
	@rm -Rf $(NAME)
	@printf "$(RED_COLOR)%-30s\n$(RESET_COLOR)" "Removed $(NAME)"

re: clean all

libs: $(libft_DEPS)
	@$(MAKE) $(MFLAGS) -C $(libft_PATH) all

$(DIRS):
	@mkdir -p $@

$(OBJ_DIR)/%.$(OBJ_EXT): $(SRC_DIR)/%.$(SRC_EXT) | $(DIRS)
	@$(CC) -o $@ -c $< $(IFLAGS) $(CFLAGS)
	@printf "%-30s -> %s\n" $< $@

$(NAME): $(OBJS) | libs
	@$(CC) -o $@ $^ $(LFLAGS) $(IFLAGS) $(CFLAGS)
	@printf "$(GREEN_COLOR)%-30s\n$(RESET_COLOR)" "Built $(NAME)"
