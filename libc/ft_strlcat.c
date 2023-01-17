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

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	size_t	dst_l;
	size_t	src_l;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	n = dst_l;
	i = 0;
	if (dst_l < dstsize - 1 && size > 0)
	{
		while (src[i] && dst_l + i < dstsize - 1)
		{
			dst[n] = src[i];
			n++;
			i++;
		}
		dst[n] = 0;
	}
	if (dst_l >= dstsize)
		dst_l = dst_size;
}
