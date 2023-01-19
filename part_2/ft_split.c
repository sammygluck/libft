/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 10:57:11 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/19 14:14:49 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


static int	count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while(s[i])
	{
		if(s[i] == c)
			count++;
		i++;
	}
	return (++count);
}

char **split(const char *s, char c)
{
	int	a;
	int	i;
	
	a = count(s, c);
	char **arr;
	arr = (char **)malloc(a * sizeof(char*));
	if(!arr)
		return (NULL);
	i = 0;
	int	e, f = 0;
	while(i < a)
	{
		f = e;
		while(s[e] != c && s[e] != '\0')
			e++;
		arr[i] = (char *)malloc(((e - f) + 1) * sizeof(char));
		if(!arr[i])
			return (NULL);
		int	g = f;
		while(g < e)
		{
			arr[i][g - f ] = s[g];
			g++;
		}
		arr[i][e-f] = '\0';
		e++;
		printf("%s\n", arr[i]);
		i++;
	}
	arr[a] = NULL;	
	return (arr);
}

int	main(void)
{
	char	string[] = "hello to you my name is sammy";
	char	**spl = split(string, ' ');

	printf("%s\n", spl[7]);
}
