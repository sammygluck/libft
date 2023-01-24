/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:07:00 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/16 16:59:23 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest || !src)
		return (NULL);
	i = n;
	if (dest > src && (src + n) < dest)
	{
		while (i > 0)
		{
			*(char *)(dest + i) = *(const char *)(src + i);
			i--;
		}
		*(char *)(dest + i) = *(const char *)(src + i);
		return (dest);
	}
	else
		return (ft_memcpy (dest, src, n));
}
