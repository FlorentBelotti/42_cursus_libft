/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <fbelotti@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:02:07 by fbelotti          #+#    #+#             */
/*   Updated: 2023/09/28 16:43:12 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_bzero(void *m, size_t n);

void	*ft_memccpy(void *dest, const void *src, size_t n);

void	*ft_memchr(const void *str, int c, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *m, int c, size_t n);

void	ft_putnbr(int nb);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		ft_atoi(const char *str);

int		ft_isalnum(char c);

int		ft_isalpha(char c);

int		ft_isascii(char c);

int		ft_isdigit(char c);

int		ft_isprint(char c);

int		ft_strcmp(const char *s1, const char *s2, size_t n);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_tolower(int c);

int		ft_toupper(int c);

char	*ft_strncpy(char *dest, const char *src, size_t len);

char	*ft_strcat(char *dest, const char *src);

char	*ft_strchr(const char *s, int c);

char	*ft_strcpy(char *dest, const char *src);

char	*ft_strdup(const char *s1);

char	*ft_strncat(char *dest, const char *src, size_t n);

char	*ft_strnstr(const char *s1, const char *s2, size_t len);

char	*ft_strrchr(const char *s, int c);

char	*ft_strstr(const char *s1, const char *s2);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

size_t	ft_strlen(const char *str);

#endif
