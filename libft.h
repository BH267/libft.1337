/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:45:58 by habenydi          #+#    #+#             */
/*   Updated: 2024/10/31 13:45:16 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isascii(char c);
int		ft_isprint(char c);
int		ft_strlen(char *c);
int		ft_atoi(char *nbr);
int		ft_strncmp(char *s, char *p, size_t n);
char	*ft_itoa(int n);
char	*ft_strdup(char *s);
char	*ft_strchr(char *str, int c);
char	*ft_strrchr(char *str, int c);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strnstr(char *str, char *to_find, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dest, char *src, size_t l);
size_t	ft_strlcat(char *dest, char *src, size_t l);
void	ft_bzero(void *ptr, int len);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl(char *s, int	fd);
void	*ft_calloc(size_t len, size_t b);
void	*ft_memset(void *arr, int c, size_t l);
void    *ft_memchr(void *str, int c, size_t n);
void    *ft_memcpy(char *src, char *dest, size_t len);
void    *ft_memmove(char *src, char *dest, size_t len);

#endif
