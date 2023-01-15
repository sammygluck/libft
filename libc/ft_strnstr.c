/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:33:05 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/12 18:08:20 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	string[] = "I would like to wish you a happy new year.";

	printf("%s\n", ft_strnstr(string, "wish",));
}

char *strnstr(char *big, const char *little, size_t len)
{
	
}
