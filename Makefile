# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivromero <ivromero@student.45urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/04 01:31:44 by ivromero          #+#    #+#              #
#    Updated: 2023/10/17 16:54:53 by ivromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRCS = ft_printf.c ft_printf_utils.c 

#SRCBONUS = ft_printf_bonus.c 

OBJS = $(SRCS:.c=.o)

#OBJSBONUS = $(SRCBONUS:.c=.o)

CC		= cc
RM		= rm -f
AR		= ar rcs

CFLAGS = -Wall -Wextra -Werror

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)
		@echo "Compilación terminada: $@"
		@make info

#bonus: .bonus

#.bonus: $(OBJSBONUS)
#		$(AR) $(NAME) $(OBJSBONUS)
#		@touch .bonus
#		@make info

all:	$(NAME)

clean:
		$(RM) $(OBJS) $(OBJSBONUS)

fclean:	clean
		$(RM) $(NAME) .bonus

re:		fclean all

.PHONY : all clean fclean re info #bonus

info:
		@echo "⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜"
		@echo "⬜                                                                ⬜"
		@echo "⬜          ft_printf sin {llaves} AKA tiny_ft_printf             ⬜"
		@echo "⬜                                                                ⬜"
		@echo "⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜"
		@echo  
		@echo "Solo con las {} de las funciones 😳."
		@echo ""
		@echo "          ⬜⬜⬜⬜⬜⬛⬛⬛⬛⬛⬜⬜⬜⬜⬜"
		@echo "          ⬜⬜⬜⬛⬛🟧🟧🟧🟧🟧⬛⬛⬜⬜⬜"
		@echo "          ⬜⬜⬛🟧🟧🟧🟧🟧🟧🟧🟧🟧⬛⬜⬜"
		@echo "          ⬜⬛🟧🟧🟧🟧⬛⬛⬛🟧🟧🟧🟧⬛⬜"
		@echo "          ⬜⬛🟧🟧⬛⬛🟫🟫🟫⬛⬛🟧🟧⬛⬜"
		@echo "          ⬛🟧🟧⬛🟫⬜⬜🏼⬜⬜🟫⬛🟧🟧⬛"
		@echo "          ⬛🟧⬛🟫⬜⬜⬜⬜⬜⬜⬜🟫⬛🟧⬛"
		@echo "          ⬛🟧⬛🟫⬜⬜⬛⬜⬛⬜⬜🟫⬛🟧⬛"
		@echo "          ⬛🟧⬛🟫⬜⬜⬜⬜⬜⬜⬜🟫⬛🟧⬛"
		@echo "          ⬛🟧⬛🟫🟫⬜⬜🏼⬜⬜🟫🟫⬛🟧⬛"
		@echo "          ⬜⬛🟧⬛🟫🟫🏼🏼🏼🟫🟫⬛🟧⬛⬜"
		@echo "          ⬜⬛🟧🟧⬛⬛⬛⬛⬛⬛⬛🟧🟧⬛⬜"
		@echo "          ⬜⬜⬛🟧🟧🟧🟧⬛🟧🟧🟧🟧⬛⬜⬜"
		@echo "          ⬜⬜⬛⬛⬛🟧⬛🟧⬛🟧⬛⬛⬛⬜⬜"
		@echo "          ⬜⬛🟧🟧🟧⬛⬛⬛⬛⬛🟧🟧🟧⬛⬜"
		@echo "          ⬛🟧🟧⬛🟧🟧🟧⬛🟧🟧🟧⬛🟧🟧⬛"
		@echo "          ⬛⬛⬛⬛🟧🟧🟧⬛🟧🟧🟧⬛⬛⬛⬛"
		@echo "          ⬛🟫🟫⬛🟧🟧🟧⬛🟧🟧🟧⬛🟫🟫⬛"
		@echo "          ⬜⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬜"
		@echo "          ⬜⬜⬜⬛🟧🟧🟧⬛🟧🟧🟧⬛⬜⬜⬜"
		@echo "          ⬜⬜⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬛⬜⬜"
