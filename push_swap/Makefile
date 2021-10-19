NAME		= push_swap

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra

RM			= rm -f

LIBFT 		= ../libft/libft.a

INCS_DIR	= ./includes
OBJS_DIR	= ./objects
SRCS_DIR 	= ./srcs \
			  ./srcs/data_structure \
			  ./srcs/preprocessing \
			  ./srcs/processing \
			  ./srcs/processing/operations \
			  ./srcs/utils

SRCS		= ./srcs/main.c \
			  ./srcs/push_swap.c \
			  \
			  ./srcs/data_structure/list_add_tail.c \
			  ./srcs/data_structure/list_new_node.c \
			  ./srcs/data_structure/stack_init.c \
			  ./srcs/data_structure/stack_print.c \
			  ./srcs/data_structure/stack_push.c \
			  ./srcs/data_structure/stack_pop.c \
			  \
			  ./srcs/preprocessing/check_args.c \
			  ./srcs/preprocessing/get_args.c \
			  ./srcs/preprocessing/set_stack.c \
			  \
			  ./srcs/processing/operations/push.c \
			  ./srcs/processing/operations/rotate.c \
			  ./srcs/processing/operations/rrotate.c \
			  ./srcs/processing/operations/swap.c \
			  \
			  ./srcs/processing/break_recursion.c \
			  ./srcs/processing/get_partitions.c \
			  ./srcs/processing/is_sorted.c \
			  ./srcs/processing/rr_or_r.c \
			  ./srcs/processing/sort_asc.c \
			  ./srcs/processing/sort_desc.c \
			  ./srcs/processing/three_divisions_a.c \
			  ./srcs/processing/three_divisions_b.c \
			  ./srcs/processing/three_divisions_utils.c \
			  ./srcs/processing/top_three_asc.c \
			  ./srcs/processing/top_three_desc.c \
			  \
			  ./srcs/utils/print_error.c


# $(addprefix src/, memo main) => 'src/memo src/main'
# $(notdir src/foo.c hacks) -> 'foo.c hacks'
OBJS		= $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.c=.o)))
vpath %.c $(SRCS_DIR)
# vpath %.h $(INCS_DIR)


all: $(NAME)


# push_swap
$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) -o $@ $^
	@echo push_swap built successfully.

# targets : normal-prerequisites | order-only-prerequisites
$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -o $@ -c $^ -I $(INCS_DIR)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)


# libft
$(LIBFT):
	@$(MAKE) -C ../libft all

checker:
	@$(MAKE) -C ../bonus all

clean:
	@$(MAKE) -C ../libft clean
	@$(MAKE) -C ../bonus clean
	@$(RM) -r $(OBJS_DIR)

fclean: clean
	@$(MAKE) -C ../libft fclean
	@$(MAKE) -C ../bonus fclean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, checker
