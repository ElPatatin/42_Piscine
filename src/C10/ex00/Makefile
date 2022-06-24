# -=-=-=-=-	NAME -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

NAME	= ft_display_file.out

# -=-=-=-=-	PATH -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

SRC_DIR	= src/
INC_DIR	= inc/
UTL_DIR	= utils/

# -=-=-=-=-	CMDS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

CC		= cc
CFLAGS	= -Wall -Werror -Wextra -MMD $(INCLUDE)
#AR		= ar -rcs
RM		= rm -f
#MK		= mkdir -p

# -=-=-=-=-	FILE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

INCLUDE	= -I $(INC_DIR)

SRCS	= ft_display_file.c

UTLS	= ft_utils.c

FILES	+= $(addprefix $(SRC_DIR), $(SRCS))
FILES	+= $(addprefix $(UTL_DIR), $(UTLS))

# -=-=-=-=-	RULE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(FILES) -o $@

clean:
	$(RM) *.d

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean