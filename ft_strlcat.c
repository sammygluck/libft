/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:55:46 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/12 16:13:30 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;

	i = 0;
	while(i < (dstsize - strlen(dst)))
	{
		dst + strlen(dst) + i = src + i;
		i++;	
	}

}

