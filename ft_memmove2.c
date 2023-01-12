/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:41:14 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/12 15:54:45 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	if (!dest || !src)
		return (NULL);
	if (dest > src && dest < (src + len))
	{
		i = (int)len - 1
		while(i >= 0)
		{
			*(char *)(dest + i) = *(const char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while(i < int(len))
		{
			*(char *)(dest + i) = *(const char *)(src + i);
			i++;
		}
	}
	return (dest);
}
