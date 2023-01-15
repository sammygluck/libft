/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:47:56 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/12 15:37:48 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	const char 	*s;
	size_t	i;

	d = (char *) dest;
	s = (const char *) src;	
	i = 0;
	
	if (d > s && d < (s + n))
	{
		d += n - 1;
		s += n - 1;
		while(i < n)
		{
			*d-- = *s--;
			i++;
		}
	}
	else
	while(i < n)
	{
		*d++ = *s++;
		i++;
	}
	return dest;
	
}

