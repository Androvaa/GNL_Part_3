# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmatutoa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/21 11:13:50 by nmatutoa          #+#    #+#              #
#    Updated: 2018/09/10 14:10:01 by nmatutoa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = gcc -Wall -Werror -Wextra -c
SOURCES = ft_atoi.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		 ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c \
		 ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c \
		 ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_isalpha.c ft_isalnum.c \
		 ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_isdigit.c ft_memalloc.c\
		 ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c\
		 ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strsplit.c ft_strjoin.c ft_strtrim.c \
		 ft_putnbr.c ft_putendl.c ft_putendldel.c ft_putstr.c ft_putchar.c ft_itoa.c \
		 ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c \
		 arrlen.c assign_string.c is_prime.c is_space.c word_count.c word_len.c alt_strtrim.c print_list.c is_printf.c is_flag.c print_arr.c ft_itoa_unsigned.c print_oct.c print_hex.c numlen.c ft_putnbr_32.c print_addr.c\
		 ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lstaddend.c \
		 ft_printf.c get_params.c mods.c print_params.c space_flag.c zero_flag.c strchr_count.c \
		 ft_padstr.c ft_padstrdel.c \
		 

OBJECTS = ft_atoi.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
		  ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o \
		  ft_strcat.o ft_strncat.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strstr.o \
		  ft_strnstr.o ft_strcmp.o ft_strncmp.o ft_isalpha.o ft_isalnum.o \
		  ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_isdigit.o ft_memalloc.o\
		  ft_memdel.o ft_strnew.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o\
		  ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strsplit.o ft_strjoin.o ft_strtrim.o \
		  ft_putnbr.o ft_putendl.o ft_putendldel.o ft_putstr.o ft_putchar.o ft_itoa.o \
		  ft_putnbr_fd.o ft_putendl_fd.o ft_putstr_fd.o ft_putchar_fd.o \
		  arrlen.o assign_string.o is_prime.o is_space.o word_count.o word_len.o alt_strtrim.o print_list.o is_printf.o is_flag.o print_arr.o ft_itoa_unsigned.o print_oct.o print_hex.o numlen.o ft_putnbr_32.o print_addr.o \
		  ft_lstnew.o ft_lstdelone.o ft_lstdel.o ft_lstadd.o ft_lstiter.o ft_lstmap.o ft_lstaddend.o \
		  ft_printf.o get_params.o mods.o print_params.o space_flag.o zero_flag.o strchr_count.o \
		  ft_padstr.o ft_padstrdel.o \
		  

all: $(NAME)

$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "libft object files created"
	@echo "libft.a created"

OBJECTS:
	@$(FLAGS) $(SOURCES) libft.h
	@echo "libft compiled"

clean:
	@rm -f $(OBJECTS)
	@echo "libft object files removed"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed"

re: fclean all 
