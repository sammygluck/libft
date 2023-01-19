/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frank.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:09:36 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/19 16:03:47 by sgluck           ###   ########.fr       */
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

static int letters_count(const char *s, int index, char c)
{
	int count;
	int	i;

	count = 0;;
	while (s[index] != c && s[index])
	{	
		count++;
		index++;
	}
	return (count);
}

static void	cpy(char *dest, const char *src, int index, int size)
{
	char *ptr;
	size_t length;

	length = (size_t) size;
	ptr = (char *)(src + index);
	//printf("%s\n", ptr);
	ft_strlcpy(dest, ptr, length);
}


char **split(const char *s, char c)
{
	char **arr;
	int	a;	//for the count of words
	int	i;	//for the index of the strings
	int e; 	//for the index of the main string
	int f;

	a = count(s, c);
	arr = (char **)malloc(a * sizeof (char *));
	if (!arr)
		return (NULL);
	e = 0;
	i = 0;
	while (i < a)
	{
		f = letters_count(s, e, c) + 1; //printf("%i\n", f);
		arr[i] = (char *)malloc(f * sizeof (char));
		if(!arr[i])
			return (NULL);
		cpy(arr[i], s, e, f);
		e = e + f; //printf("%s\n", arr[i]);
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
