NAME=liball.a
INC=includes
SRCDIR=srcs
OBJDIR=objs
SRCS=$(wildcard $(SRCDIR)/*.c)
OBJS=$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))
CC=gcc
CFLAGS=-Wall -Wextra -Werror -I$(INC)

all: $(NAME)

$(NAME): $(OBJS)

objs/%.o: srcs/%.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@ar -rcs $(NAME) $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

norm:
	@norminette $(SRCS) $(INC)
