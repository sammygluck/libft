/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:40:18 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/19 13:20:25 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (++count);
}

char	**split(const char *s, char c)
{
	char	**arr;
	int		a;
	int		i;
	int		e;
	int		f;
	int		g;

	//1. counting how many words there are
	a = count(s, c);
	//2. allocating memory for the word amounts and checking if returns well
	arr = (char **)malloc(a * sizeof (char *));
	if (!arr)
		return (NULL);
	//3. loop per word
	e = 0;
	f = 0;
	while (i < a)
	{
		// 4. check if it has reached the end of the word, in order to get the length of the word
		f = e;
		while (s[e] != c && s[e] != '\0')
			e++;
		// 5. allocate memory for the the length of the word + 1 for the null byte, also check if getting valid pointer back
		arr[i] = (char *)malloc(((e - f) + 1) * sizeof (char));
		if (!arr[i])
			return (NULL);
		// 6. copying the values of the original string into our newly minted string + plus adding a null byte
		g = f;
		while (g < e)
		{
			arr[i][g - f] = s[g];
			g++;
		}
		arr[i][e - f] = '\0';
		e++;
		printf("%s\n", arr[i]);
		i++;
	}
	// 7. settig the last string to NULL
	arr[a] = NULL;
	// 8. returning our array of arrays
	return (arr);
}

int	main(void)
{
	char	string[] = "hello to you my name is sammy";
	char	**spl = split(string, ' ');

	printf("%s\n", spl[7]);
}
