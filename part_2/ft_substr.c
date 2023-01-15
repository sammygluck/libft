/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:05:34 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/15 13:10:59 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	int	i;

        if (!s)
		return (NULL);
	/*if((size_t) start > ft_strlen(s))
		return(ft_strdup(""));*/
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return(NULL);
	i = 0;
	while(i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

int	main(void)
{
	char	str[] = "haystackneedlehaystack";
	printf("%s\n", ft_substr(str, 8, 6));
}
