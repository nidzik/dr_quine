#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nidzik <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/11 10:34:54 by nidzik            #+#    #+#              #
#    Updated: 2016/12/02 02:57:59 by nidzik           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = Sully
FILE = Grace_kid.c
OBJPATH = obj
SRCPATH = .
INCLUDE = -I ./

CC = gcc



BASEFLAGS = -Wall -Wextra
CFLAGS = $(BASEFLAGS) -Werror -O2 -g 


LFTCALL = all
LFTRE = re

SRCSFILES = Sully.c \


SRC = $(addprefix $(SRCPATH)/,$(SRCSFILES))
OBJECTS = $(SRC:$(SRCPATH)/%.c=$(OBJPATH)/%.o)

RM = rm -rf

Y = \033[0;33m
R = \033[0;31m
G = \033[0;32m
E = \033[39m

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "$(Y)[COMPILING MALLOC] $(G) $(CC) -o $@ $(CFLAGS) objs.o $(LIBS) $(E)"
	@$(CC)  -o $@ $(CFLAGS)  $(OBJECTS) 
	@echo "$(Y)[COMPILING MALLOC DONE]$(E)"

$(OBJECTS): $(OBJPATH)/%.o : $(SRCPATH)/%.c
	@mkdir -p $(dir $@)
	$(CC) -o $@ $(CFLAGS) $(INCLUDES) -c $<

clean:
	$(RM) $(OBJPATH)

fclean: clean
	$(RM) $(NAME)
	$(RM) Sully_5.c


re: fclean all
