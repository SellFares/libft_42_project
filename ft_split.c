/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 22:25:38 by fsellami          #+#    #+#             */
/*   Updated: 2026/08/09 23:08:46 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	count;
	int	inWorld;	// 0 = outside world, 1 = inside world

	inWorld = 0;
	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		if (*s == c)
			inWorld = 0;
		else
		{
			if (!inWorld)
			{
				inWorld = 1;
				count++;
			}	
		}
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char    **res = NULL;

	printf("%d",count_words(s, c));
	return (res);
}

int	main()
{
	char	*s = "       1     1122 235";
	char	c = ' ';
	char	**res;

	res = ft_split(s, c);
}

