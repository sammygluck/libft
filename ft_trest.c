/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:36:02 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/15 15:52:34 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *trim_set(const char *s1, const char *set)
{
	if (s1 == NULL || set == NULL)
		return (NULL);

	int start = 0;
	int end = strlen(s1) - 1;
	while(start <= end && strchr(set, s1[start]) != NULL)
		start++;
	while(end > start && strchr(set, s1[end]) != NULL)
		end--;
	int len = end - start + 1;
	char	*result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	strncpy(result, s1 + start, len);
	result[len] = '\0';
	return result;
}

