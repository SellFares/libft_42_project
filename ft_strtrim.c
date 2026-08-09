/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsellami <fsellami@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 13:14:01 by fsellami          #+#    #+#             */
/*   Updated: 2026/08/09 22:52:17 by fsellami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_found(char c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*start;
	char	*end;
	int		len;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	if (end != start)
		end--;
	while (*start && is_found(*start, set))
		start++;
	while (end > start && is_found(*end, set))
		end--;
	if (start > end || *start == '\0')
		len = 0;
	else
		len = end - start + 1;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, start, len + 1);
	return (str);
}

/*
int	main()
{
	//char	*s1 = " eeee   Hello Ahmed How are you aze azzeee";
	//char	*set = " e";
	char	*s1 = "abcdba";
	char	*set = "acb";
	char	*str;

	str = ft_strtrim(s1,set);
	printf("%s", str);
}
*/
