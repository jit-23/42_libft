/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 19:37:00 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/30 19:37:02 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	size_string(char const *str, char c, int i)
{
	int	size;

	size = 0;
	while (str[i] != c && str[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **strs, int i)
{
	while (i-- > 0)
		free(strs[i]);
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		count;
	char	**strings;
	int		size;

	i = 0;
	j = 0;
	count = ft_count(s, c);
	strings = (char **)malloc(sizeof(char *) * (count + 1));
	if (!strings)
		return (NULL);
	while (i < count)
	{
		while (s[j] == c)
			j++;
		size = size_string(s, c, j);
		strings[i] = ft_substr(s, j, size);
		if (!strings)
			ft_free(strings, i);
		j += size;
		i++;
	}
	strings[i] = 0;
	return (strings);
}

// int main()
// {
// 	char  **string;
// 	int i = 0;
// 	int count;
// 	string = ft_split("this is a string", ' ');
// 	count = ft_count("this is a string", ' ');
// 	while(string[i])
// 		printf("%s\n", string[i++]);
// 	return (0);
// }
