/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:15:16 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/11 16:24:00 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t len)
{
	int	i;

	i = 0;
	while(i < len)
	{
		*(unsigned char*)(str + i) = (unsigned char) c;
		i++;
	}
	return (str);
}
