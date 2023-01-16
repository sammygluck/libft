/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:15:16 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/16 16:00:22 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char *)(str + i) = (unsigned char) c;
		i++;
	}
	return (str);
}
