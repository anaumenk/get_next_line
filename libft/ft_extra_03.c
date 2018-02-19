/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extra_03.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaumenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 19:30:14 by anaumenk          #+#    #+#             */
/*   Updated: 2017/11/20 19:30:15 by anaumenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	extra_03(char *s, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			if (s[i + 1] == '\0')
				return (j);
			i++;
		}
		while (s[i] != c && s[i])
		{
			if (s[i + 1] == c || s[i + 1] == '\0')
				j++;
			i++;
		}
		i++;
	}
	return (j);
}