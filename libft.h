/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joada-s2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:54:57 by joada-s2          #+#    #+#             */
/*   Updated: 2023/10/06 13:34:22 by joada-s2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#ifndef LIBFT_H
# define LIBFT_H

int     ft_atoi(const char *str);
int     ft_toupper(int c);
int     ft_tolower(int c);
char *ft_strrstr(char *str, int c);
char *ft_strnstr(char *subs, char * string, int n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_strlen(char *str);
size_t     ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t size);
char    *ft_strchar(char *str, int c);
void	*ft_memset(void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int     ft_isprint(int c);
int     ft_isdigit(unsigned char c);
int     ft_isascii(int c);
int     ft_isalpha(int c);
int     ft_isalnum(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif
