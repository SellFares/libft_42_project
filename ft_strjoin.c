/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 18:34:43 by fsellami          #+#    #+#             */
/*   Updated: 2026/08/09 13:08:44 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		len1;
	int		len2;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(len1 + len2 + 1);
	if (str == NULL)
		return (NULL);
	while (i < len1)
	{
		str[i] = (char)s1[i];
		i++;
	}
	while (i < len2 + len1)
	{
		str[i] = (unsigned char)s2[i - len1];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main()
{
	char	*s1 = "Hello";
	char	*s2 = " World!";
	char	*res;

	res = ft_strjoin(s1,s2);
	printf("%s", res);
}
*/
