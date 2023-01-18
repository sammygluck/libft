/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:27:42 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/18 18:44:22 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	if (nmemb && total_size / nmemb != size)
		return (NULL);
	ptr = (void *)malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}
