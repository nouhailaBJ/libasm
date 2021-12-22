# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbjaghou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/17 17:37:10 by nbjaghou          #+#    #+#              #
#    Updated: 2021/02/17 17:37:13 by nbjaghou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRC = ft_read.s	\
	   ft_strcmp.s	\
	   ft_strcpy.s	\
	   ft_strdup.s	\
	   ft_strlen.s	\
	   ft_write.s	\

OBJS = ft_read.o	\
	   ft_strcmp.o	\
	   ft_strcpy.o	\
	   ft_strdup.o	\
	   ft_strlen.o	\
	   ft_write.o	\

all : $(NAME)

$(NAME) : 
	@nasm -f macho64 ft_read.s
	@nasm -f macho64 ft_strcmp.s
	@nasm -f macho64 ft_strcpy.s
	@nasm -f macho64 ft_strdup.s
	@nasm -f macho64 ft_strlen.s
	@nasm -f macho64 ft_write.s
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME) 
clean : 
		/bin/rm -f $(OBJS)

fclean : clean
		/bin/rm -f $(NAME)

re : fclean
		make all
