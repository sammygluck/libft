/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:52:39 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/12 17:06:27 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(char *str, int c)
{
	char	*ptr;
	int	end;

	end = ft_strlen(str);
	ptr = str + end;
	while(*ptr != c)
		ptr--;
	return (ptr);
}

int	main(void)
{
	char	string[] = "hello world";

	printf("%s\n", string);
	printf("%s\n", ft_strrchr(string, '\0'));
	return (0);
}
