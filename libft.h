/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:02:07 by fbelotti          #+#    #+#             */
/*   Updated: 2023/10/11 15:27:24 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list {
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalnum(char c);

int		count_numbers(int n);

int		ft_isalpha(char c);

int		ft_isascii(char c);

int		ft_isdigit(char c);

int		ft_isprint(char c);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		ft_atoi(const char *str);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_tolower(int c);

int		ft_toupper(int c);

void	ft_bzero(void *m, size_t n);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putchar_fd(char c, int fd);

void	*ft_memchr(const void *str, int c, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t count);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *m, int c, size_t n);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	*ft_calloc(size_t num, size_t size);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *s1);

char	**ft_split(char const *s, char c);

char	*ft_strtrim(char *s, char *set);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(const char *s1, const char *s2);

char	*ft_strnstr(const char *s1, const char *s2, size_t len);

char	*ft_strrchr(const char *s, int c);

char	*ft_itoa(int n);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

size_t	ft_strlen(const char *str);

#endif
