/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:28:42 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/11 16:47:44 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#ifndef LIBFT_H_
#define LIBFT_H_

int	ft_isalpha(int	c);
int	ft_isdigit(int	c);
int	ft_isalnum(int	c);
int	ft_isascii(int	c);
int	ft_isprint(int	c);
int	ft_strlen(int	c);
void	*ft_memset(void *str, int c, size_t len);
void	*ft_bzero(void *str, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif

