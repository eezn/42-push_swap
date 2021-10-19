NAME		= checker

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra

RM			= rm -f

LIBFT		= ../libft/libft.a

INCS_DIR	= ./includes
OBJS_DIR	= ./objects
SRCS_DIR	= ./srcs \
			  ./srcs/checker \
			  ./srcs/checker/instructions \
			  ./srcs/data_structure \
			  ./srcs/preprocessing \
			  ./srcs/utils

SRCS		= ./srcs/main.c \
			  ./srcs/checker.c \
			  \
			  ./srcs/checker/call_instruction.c \
			  ./srcs/checker/get_next_line.c \
			  ./srcs/checker/is_sorted.c \
			  ./srcs/checker/is_valid_instruction.c \
			  \
			  ./srcs/checker/instructions/push.c \
			  ./srcs/checker/instructions/rotate.c \
			  ./srcs/checker/instructions/rrotate.c \
			  ./srcs/checker/instructions/swap.c \
			  \
			  ./srcs/data_structure/list_add_tail.c \
			  ./srcs/data_structure/list_new_node.c \
			  ./srcs/data_structure/stack_init.c \
			  ./srcs/data_structure/stack_pop.c \
			  ./srcs/data_structure/stack_push.c \
			  \
			  ./srcs/preprocessing/check_args.c \
			  ./srcs/preprocessing/get_args.c \
			  ./srcs/preprocessing/set_stack.c \
			  \
			  ./srcs/utils/print_error.c

OBJS		= $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.c=.o)))
vpath %.c $(SRCS_DIR)
# vpath %.h $(INCS_DIR)


all: $(NAME)


# checker
$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) -o $@ $^
	@mv $(NAME) ../push_swap
	@echo checker built successfully.

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -o $@ -c $^ -I $(INCS_DIR)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)


# libft
$(LIBFT):
	@$(MAKE) -C ../libft all

clean:
	@$(MAKE) -C ../libft clean
	@$(RM) -r $(OBJS_DIR)

fclean: clean
	@$(MAKE) -C ../libft fclean
	@$(RM) ../push_swap/$(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
