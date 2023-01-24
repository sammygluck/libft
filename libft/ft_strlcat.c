/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:55:46 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/16 17:36:30 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	bytes;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen((char *)src);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	//cat dst + src
	bytes = dstsize - dstlen - 1;
	i = 0;
	while (i < bytes)
	{
		*(char *)(dst + dstlen + i) = *(char *)(src + i);
		i++;
	}
	*(char *)(dst + dstlen + i) = '\0';
	return (srclen + dstlen);
}
