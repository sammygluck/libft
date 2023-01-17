/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:27:42 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/16 15:42:39 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	int	i;

	ptr = malloc(nmemb * size);
	if(!ptr)
		return (NULL);
	i = 0;
	while(i < nmembi * size)
		((char *)ptr)[i++] = 0;
	return(ptr);
}
