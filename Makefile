# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imamasol <imamasol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/05 16:29:23 by imamasol          #+#    #+#              #
#    Updated: 2025/06/07 16:08:17 by imamasol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_itoa.c ft_tolower.c ft_toupper.c ft_isascii.c \
ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c \
ft_atoi.c ft_strlen.c ft_strdup.c ft_putnbr_fd.c \
ft_bzero.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_split.c ft_strchr.c ft_calloc.c ft_strrchr.c \
ft_memset.c ft_strjoin.c ft_strtrim.c ft_memcpy.c \
ft_memchr.c ft_memmove.c ft_strlcat.c ft_strlcpy.c \
ft_strncmp.c ft_striteri.c ft_strnstr.c ft_strmapi.c \
ft_substr.c ft_memcmp.c

OBJ = $(SRCS:.c=.o)
COMP = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(COMP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
