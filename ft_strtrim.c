/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 13:14:01 by fsellami          #+#    #+#             */
/*   Updated: 2026/08/09 19:28:29 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_found(char c, char const *set, int set_len)
{
	int	j;

	j = 0;
	while (j < set_len)
	{
		if (c == (char)set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{

	char	*str;
	int		i;
	int		l;
	int		len;
	int		set_len;

	len = ft_strlen(s1);
	set_len = ft_strlen(set);
	
	i = 0;
	l = 0;
	while (i < len)
	{
		if (is_found(s1[i], set, set_len) == 0)
			cpy_str[l++] = s1[i];
		i++;
	}
	cpy_str[l] = '\0';
	str = malloc(l + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < l)
	{
		str[i] = cpy_str[l];
		i++;
	}
	str[l] = '\0';
	return (str);
}


int	main()
{
	char	*s1 = "Hello Ahmed How are you";
	char	*set = " e";
	char	*str;

	str = ft_strtrim(s1,set);
	printf("%s", str);
}
