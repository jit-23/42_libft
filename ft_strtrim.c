/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:07:09 by fde-jesu          #+#    #+#             */
/*   Updated: 2023/04/26 22:17:44 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



static	int	set_n(char *s1, char *set)
{
	int i, j,count;
	i = j = count = 0;

	while (s1[i])
	{
		j = 0;
		while (s1[i + j] == set[j] && set[j])
		{
			j++;
		}
		if (set[j] == '\0')
			count++; 
		i++;
	}
	return (count);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	l;
	char *str;
	char *look;
	char	*ptr;
	int n_set;

	i = j = l = 0;
	
	str = (char *)s1;
	look = (char *)set;
	n_set = set_n(str, look); // number of recurenses of the string to trim

	ptr = (char *)malloc((sizeof(char) * (ft_strlen(str)) - ((ft_strlen(look) * n_set) + 1)));
	if (!ptr)
		return (0);
	while(str[i])
	{
		j = 0;
		while (look[j])
		{
			if (str[i] == look[j])
			{
				l = 0;
				while(str[i + l] == look[j + l])
					l++;
				if (look[j + l] == '\0')
				{
					i += l;
					ptr[i] = str[i];
				}	 
			}
			//ptr[i] = str[i];
			j++;
		}
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int main()
{
	char s1[] = "daedaedaedaedaedae";// 6 - e/a;
	char s2[] = "ae";
	char	*ptr;
	ptr = ft_strtrim(s1,s2);
	int i = 0;
	while(i < 10)
		printf("%d\n",ptr[i++]);
	free(ptr);
	return (0);
}