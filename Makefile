NAME = libft.a

################
##### SRC ######
################

PATH_SRCS = srcs/

SRCS += hello.c

vpath %.c $(PATH_SRCS)

################
#### HEADER ####
################

INCLUDES_LIBFT = includes/

INCLUDES = -I $(INCLUDES_LIBFT)

################
#### OBJS  #####
################

PATH_OBJS = objs/

OBJS = $(patsubst %.c, ${PATH_OBJS}/%.o, ${SRCS})

########################
##### Compilation  #####
########################

COMPILER = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

################
#### RULE  #####
################

all: $(NAME)

$(NAME): $(OBJS)
		$(AR) $@ $^

$(OBJS): $(PATH_OBJS)/%.o: %.c
		mkdir -p $(PATH_OBJS)
		$(COMPILER) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean:
		$(RM) -r $(PATH_OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY:
