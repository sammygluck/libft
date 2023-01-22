/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:37:13 by sgluck            #+#    #+#             */
/*   Updated: 2023/01/22 17:01:47 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	length(int nb)
{
	int	l;

	l = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		l++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	int			len;
	int			sign;
	char		*result;

	sign = 1;
	len = length(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
		sign = -1;
	result[len] = '\0';
	while (len--)
	{
		result[len] = (n % 10) * sign + '0';
		n /= 10;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}

/*int	main(void)
{
	int	a;

	a = 2147483648;
	printf("%s\n", ft_itoa(a));
}*/
