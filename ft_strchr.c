/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:37:23 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/12 16:52:27 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(char *s, int c)
{
	int	i;
	char *ptr;

       	if(!s)
		return(NULL);
	ptr = s;
	i = 0;

	while(*ptr != c)
		ptr++;	
	return (ptr);
}

int	main(void)
{
	char string[] = "hello world";
	
	printf("%s\n", string);
	printf("%s\n", ft_strchr(string, '\0'));
}
