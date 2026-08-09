/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 17:27:06 by fsellami          #+#    #+#             */
/*   Updated: 2026/08/07 18:29:20 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	int		s_len;

	i = 0;
	while (*s)
	{
		if ((int)start == i)
			break ;
		i++;
		s++;
	}
	s_len = ft_strlen(s);
	if (s_len < (int)len)
		len = ft_strlen(s);
	if (s_len < (int)start)
		start = len;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	sub = ft_memcpy(sub, s, len);
	sub[len] = '\0';
	return (sub);
}

/*
#include <stdio.h>
int main()
{
	char	*s = "Hello World";
	char	*sub;
	unsigned int start;
	size_t len;
	
	start = 0;
	len = 40;
	sub = ft_substr(s, start, len);
	printf("result :%s",sub);
}
*/
