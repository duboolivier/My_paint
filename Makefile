##
## EPITECH PROJECT, 2024
## frenchNameFormatter
## File description:
## Makefile
##

NAME	=	my_paint

CC := gcc

SRC	=	$(wildcard src/*.c)	\

OBJ	=	$(SRC:src/%.c=$(BUILDDIR)/%.o)

TESTSRC	=	$(wildcard tests/*.c)	\

TESTOBJ	=	$(TESTSRC:tests/%.c=$(BUILDDIR)/%.o)

BUILDDIR	=	.build

TESTDIR	=	tests

CFLAGS	=	-I./include -lcsfml-graphics -lcsfml-window -lcsfml-system

all:	$(NAME)

$(BUILDDIR):
	@mkdir -p $(BUILDDIR)

$(BUILDDIR)/%.o:	src/%.c | $(BUILDDIR)
	@$(CC) -o $@ -c $< $(CFLAGS)
	@echo -e "\e[01m\e[33m    Compiling...\
		\e[00m\e[39m$<\e[032m [OK]\e[00m"

$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@rm -rf $(BUILDDIR)
	@echo -e "\x1B[31;1mAll object files have been removed.\e[0m"

fclean:	clean
	@rm -rf $(NAME)
	@echo -e "\x1B[38;5;210m$(NAME)\e[0m\e[38;5;196m has been removed.\e[0m"
	@rm -rf unit_tests
	@echo -e "\x1B[38;5;210munit_tests\e[0m\e[38;5;196m has been removed.\e[0m"

$(BUILDDIR)/%.o:	tests/%.c | $(BUILDDIR)
	@$(CC) -o $@ -c $< $(CFLAGS)
	@echo -e "\e[01m\e[33m    Compiling...\
		\e[00m\e[39m$<\e[032m [OK]\e[00m"

unit_tests:	CFLAGS += -lcriterion --coverage -g3
unit_tests:	SRC := $(filter-out src/main.c, $(SRC))
unit_tests:	clean $(TESTOBJ) $(OBJ)
	@$(CC) -o unit_tests $(TESTOBJ) $(OBJ) $(CFLAGS)

re:	fclean all
	@echo -e "\x1B[38;5;42m$(NAME)\e[0m\e[32;1m has been recompiled.\e[0m"

.PHONY: all clean fclean unit_tests re
