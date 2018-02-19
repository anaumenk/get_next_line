/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:38:18 by anaumenk          #+#    #+#             */
/*   Updated: 2017/11/14 16:38:19 by anaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	for_malloc(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	if (n < 10)
		i++;
	else
	{
		while (n > 0)
		{
			i++;
			n = n / 10;
		}
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;

	i = for_malloc(n);
	s = (char*)malloc(sizeof(char) * (i + 1));
	if (i == 0 || s == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s[i] = '\0';
	i--;
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	if (n < 10)
		s[i] = n + '0';
	while (n > 0)
	{
		s[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (s);
}
