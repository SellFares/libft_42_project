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
	int	in_world;

	in_world = 0;
	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		if (*s == c)
			in_world = 0;
		else
		{
			if (in_world == 0)
			{
				in_world = 1;
				count++;
			}
		}
		s++;
	}
	return (count);
}

void	*free_memory(char **strs, int count)
{
	while (count > 0)
		free(strs[--count]);
	free(strs);
	return (NULL);
}

int	extract_world(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word_count;
	int		i;

	word_count = count_words(s, c);
	res = malloc(sizeof(char *) * (word_count + 1));
	if (!res)
		return (NULL);
	word_count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != '\0')
		{
			i = extract_world(s, c);
			res[word_count] = ft_substr(s, 0, i);
			if (!res[word_count])
				return (free_memory(res, word_count));
			word_count++;
			s = s + i;
		}
	}
	res[word_count] = '\0';
	return (res);
}
/*
int	main()
{
	char	*s = "       1     1122 235";
	char	c = ' ';
	char	**res;
	int		i;

	res = ft_split(s, c);
	i = 0;
	while(res[i])
		printf("%s,",res[i++]);
	printf("\n");
	//printf("%d",count_words(s, c));

}*/
